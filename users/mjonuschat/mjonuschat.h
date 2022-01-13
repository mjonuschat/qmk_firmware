// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include QMK_KEYBOARD_H

#include "eeprom.h"
#include "keyrecords/wrappers.h"
#include "keyrecords/process_records.h"
#include "callbacks.h"

#ifdef RGBLIGHT_ENABLE
#    include "rgb/rgb_light_user.h"
#endif
//#if RGB_MATRIX_ENABLE
//#    include "rgb/rgb_matrix_stuff.h"
//#endif
#ifdef ST7565_ENABLE
#    include "display/st7565_user.h"
#endif

/* Define layer names */
enum userspace_layers {
    _NEO_LAYER_1,
    _NEO_LAYER_2,
    _NEO_LAYER_3,
    _NEO_LAYER_4,
    _NEO_LAYER_5,
    _NEO_LAYER_6,
    _QWERTY,
    _MEDIA,
};

#define NEO_LAYER_1_HSV 0, 0, 255      // HSV_WHITE
#define NEO_LAYER_2_HSV 43, 255, 255   // HSV_YELLOW
#define NEO_LAYER_3_HSV 128, 255, 255  // HSV_CYAN
#define NEO_LAYER_4_HSV 64, 255, 255   // HSV_CHARTREUSE
#define NEO_LAYER_5_HSV 213, 255, 255  // HSV_MAGENTA
#define NEO_LAYER_6_HSV 30, 218, 218   // HSV_GOLDENROD

#define NEO_LAYER_1_RGB 0xFF, 0xFF, 0xFF  // RGB_WHITE
#define NEO_LAYER_2_RGB 0xFF, 0xFF, 0x00  // RGB_YELLOW
#define NEO_LAYER_3_RGB 0x00, 0xFF, 0xFF  // RGB_CYAN
#define NEO_LAYER_4_RGB 0x80, 0xFF, 0x00  // RGB_CHARTREUSE
#define NEO_LAYER_5_RGB 0xFF, 0x00, 0xFF  // RGB_MAGENTA
#define NEO_LAYER_6_RGB 0xD9, 0xA5, 0x21  // RGB_GOLDENROD

bool mod_key_press_timer(uint16_t code, uint16_t mod_code, bool pressed);
bool mod_key_press(uint16_t code, uint16_t mod_code, bool pressed, uint16_t this_timer);
bool has_all_bits_in_mask(uint8_t value, uint8_t mask);
void tap_code16_with_mods(uint16_t keycode, uint8_t force_modifiers);
void tap_code16_no_mods(uint16_t kc);
void german_letter(uint16_t keycode);

// clang-format off
typedef union {
    uint32_t raw;
    struct {
        bool    rgb_layer_change     :1;
        bool    rgb_matrix_idle_anim :1;
    };
} userspace_config_t;
// clang-format on

extern userspace_config_t userspace_config;
