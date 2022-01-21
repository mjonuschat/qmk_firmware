// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"
#include "rgb_matrix.h"
extern led_config_t g_led_config;

#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS
static uint32_t matrix_rest_timer;
#endif

__attribute__((weak)) void rgb_matrix_indicator_keymap(void) {}

void matrix_scan_rgb_matrix(void) {
#if defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    if (rgb_matrix_get_mode() != RGB_MATRIX_REST_MODE && sync_timer_elapsed32(matrix_rest_timer) > 15000) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_REST_MODE);
    }
#endif
    rgb_matrix_indicator_keymap();
}

void keyboard_post_init_rgb_matrix(void) {
#if defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    rgb_matrix_mode_noeeprom(RGB_MATRIX_ACTIVE_MODE);
#endif
    //    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}

bool process_record_user_rgb_matrix(uint16_t keycode, keyrecord_t *record) {
#if defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    matrix_rest_timer = sync_timer_read32();
    if (rgb_matrix_get_mode() != RGB_MATRIX_ACTIVE_MODE) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_ACTIVE_MODE);
    }
#endif

    return true;
}

__attribute__((weak)) bool rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max) { return true; }
void                       rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_keymap(led_min, led_max)) {
        return;
    }

    if (userspace_config.rgb_layer_change) {
        switch (get_highest_layer(layer_state | default_layer_state)) {
            case _NEO_LAYER_1:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_1_HSV);
                break;
            case _NEO_LAYER_2:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_2_HSV);
                break;
            case _NEO_LAYER_3:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_3_HSV);
                break;
            case _NEO_LAYER_4:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_4_HSV);
                break;
            case _NEO_LAYER_5:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_5_HSV);
                break;
            case _NEO_LAYER_6:
                rgb_matrix_sethsv_noeeprom(NEO_LAYER_6_HSV);
                break;
            case _QWERTY:
                rgb_matrix_sethsv_noeeprom(HSV_GREEN);
                break;
            case _MEDIA:
                rgb_matrix_sethsv_noeeprom(HSV_RED);
                break;
        }
    }
}

__attribute__((weak)) bool rgb_matrix_indicators_keymap(void) { return true; }
void                       rgb_matrix_indicators_user(void) { rgb_matrix_indicators_keymap(); }
