// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"
#include "rgb_light_user.h"
#include "eeprom.h"

#if defined(RGBLIGHT_STARTUP_ANIMATION)
#    include "rgb_light_animation.h"
#endif

bool has_initialized;

void rgblight_set_hsv_and_mode(uint8_t hue, uint8_t sat, uint8_t val, uint8_t mode) {
    rgblight_sethsv_noeeprom(hue, sat, val);
    rgblight_mode_noeeprom(mode);
}

bool process_record_user_rgb_light(uint16_t keycode, keyrecord_t *record) { return true; }

__attribute__((weak)) void keyboard_post_init_rgb_light_animation(void) {}
void                       keyboard_post_init_rgb_light(void) {
    keyboard_post_init_rgb_light_animation();

    if (userspace_config.rgb_layer_change) {
        layer_state_set_rgb_light(layer_state);
    }
}

__attribute__((weak)) void matrix_scan_rgb_light_animation(void) {}
void                       matrix_scan_rgb_light(void) { matrix_scan_rgb_light_animation(); }

layer_state_t layer_state_set_rgb_light(layer_state_t state) {
    if (userspace_config.rgb_layer_change) {
        switch (get_highest_layer(state | default_layer_state)) {
            case _NEO_LAYER_1:
                rgblight_set_hsv_and_mode(NEO_LAYER_1_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _NEO_LAYER_2:
                rgblight_set_hsv_and_mode(NEO_LAYER_2_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _NEO_LAYER_3:
                rgblight_set_hsv_and_mode(NEO_LAYER_3_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _NEO_LAYER_4:
                rgblight_set_hsv_and_mode(NEO_LAYER_4_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _NEO_LAYER_5:
                rgblight_set_hsv_and_mode(NEO_LAYER_5_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _NEO_LAYER_6:
                rgblight_set_hsv_and_mode(NEO_LAYER_6_HSV, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _QWERTY:
                rgblight_set_hsv_and_mode(HSV_GREEN, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
            case _MEDIA:
                rgblight_set_hsv_and_mode(HSV_RED, RGBLIGHT_MODE_STATIC_LIGHT);
                break;
        }
    }

    return state;
}
