// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"

static bool     is_enabled;
static bool     is_rgblight_startup;
static HSV      old_hsv;
static uint8_t  old_mode;
static uint16_t rgblight_startup_loop_timer;

void keyboard_post_init_rgb_light_animation(void) {
    is_enabled = rgblight_is_enabled();
    if (userspace_config.rgb_layer_change) {
        layer_state_set_rgb_light(layer_state);
    }
    old_hsv  = rgblight_get_hsv();
    old_mode = rgblight_get_mode();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    is_rgblight_startup = true;
}

void matrix_scan_rgb_light_animation(void) {
    if (is_rgblight_startup && is_keyboard_master()) {
        if (sync_timer_elapsed(rgblight_startup_loop_timer) > 10) {
            static uint8_t counter;
            counter++;
            rgblight_sethsv_noeeprom((counter + old_hsv.h) % 255, 255, 255);
            rgblight_startup_loop_timer = sync_timer_read();
            if (counter == 255) {
                is_rgblight_startup = false;
                if (userspace_config.rgb_layer_change) {
                    layer_state_set_rgb_light(layer_state);
                } else {
                    rgblight_set_hsv_and_mode(old_hsv.h, old_hsv.s, old_hsv.v, old_mode);
                }
                if (!is_enabled) {
                    rgblight_disable_noeeprom();
                }
            }
        }
    }
}
