// Copyright 2021 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"
#include "display_common.h"
#include "version.h"
#include <string.h>

bool process_record_user_st7565(uint16_t keycode, keyrecord_t *record) { return true; }

void st7565_render_neo_layer_state(void) {
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    st7565_write_ln_P(PSTR(DISPLAY_RENDER_LAYER_NAME), false);
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO1), layer == _NEO_LAYER_1);
    st7565_advance_char();
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO2), layer == _NEO_LAYER_2);
    st7565_advance_char();
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO3), layer == _NEO_LAYER_3);
    st7565_advance_char();
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_MEDIA), layer == _MEDIA);
    st7565_advance_page(true);

    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO4), layer == _NEO_LAYER_4);
    st7565_advance_char();
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO5), layer == _NEO_LAYER_5);
    st7565_advance_char();
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYER_NEO6), layer == _NEO_LAYER_6);
    st7565_advance_page(true);
}

void st7565_render_mod_status(uint8_t modifiers) {
    static const char PROGMEM mod_status[5][3] = {
        {0xE8, 0xE9, 0},  // Shift
        {0xE4, 0xE5, 0},  // Control
        {0xE6, 0xE7, 0},  // Alt
        {0xEA, 0xEB, 0},  // Win
        {0xEC, 0xED, 0}   // Apple
    };
    st7565_write_P(PSTR(DISPLAY_RENDER_MODS_NAME), false);
    st7565_write_P(mod_status[0], (modifiers & MOD_BIT(KC_LSHIFT)));
    st7565_write_P(mod_status[1], (modifiers & MOD_BIT(KC_LCTL)));
    st7565_write_P(mod_status[2], (modifiers & MOD_BIT(KC_LALT)));
#ifdef HOST_OS_WINDOWS
    st7565_write_P(mod_status[3], (modifiers & MOD_BIT(KC_LGUI)));
    st7565_write_P(mod_status[3], (modifiers & MOD_BIT(KC_RGUI)));
#else
    st7565_write_P(mod_status[4], (modifiers & MOD_BIT(KC_LGUI)));
    st7565_write_P(mod_status[4], (modifiers & MOD_BIT(KC_RGUI)));
#endif
    st7565_write_P(mod_status[2], (modifiers & MOD_BIT(KC_RALT)));
    st7565_write_P(mod_status[1], (modifiers & MOD_BIT(KC_RCTL)));
    st7565_write_P(mod_status[0], (modifiers & MOD_BIT(KC_RSHIFT)));
}

void st7565_render_keylock_status(uint8_t led_usb_state) {
    static const char PROGMEM qmk_logo[3][6] = {
        {0x81, 0x82, 0x83, 0x84, 0x80, 0x00},  // Upper section
        {0xa1, 0xa2, 0xa3, 0xa4, 0xa0, 0x00},  // Middle section
        {0xc1, 0xc2, 0xc3, 0xc4, 0xc0, 0x00},  // Lower section
    };

    static const char PROGMEM lock_status[3][4] = {
        {0xce, 0xcf, 0x00, 0},  // Caps Lock
        {0xd0, 0xd1, 0x00, 0},  // Num Lock
        {0xd2, 0xd3, 0x00, 0},  // Scroll Lock
    };

    // Upper section
    st7565_write_P(qmk_logo[0], false);
    st7565_write_P(PSTR(DISPLAY_RENDER_LOCK_NAME), false);
    st7565_write_P(lock_status[0], led_usb_state & (1 << USB_LED_CAPS_LOCK));
    st7565_write_P(lock_status[1], led_usb_state & (1 << USB_LED_NUM_LOCK));
    st7565_write_P(lock_status[2], led_usb_state & (1 << USB_LED_SCROLL_LOCK));
    st7565_advance_page(true);

    // Middle section
    st7565_write_P(qmk_logo[1], false);
    st7565_write_P(PSTR(DISPLAY_RENDER_LAYOUT_NAME), false);

    if (layer_state_is(_QWERTY)) {
        st7565_write_P(PSTR(DISPLAY_RENDER_LAYOUT_QWERTY), false);
    } else if (layer_state_is(_MEDIA)) {
        st7565_write_P(PSTR(DISPLAY_RENDER_LAYOUT_MEDIA), false);
    } else {
        st7565_write_P(PSTR(DISPLAY_RENDER_LAYOUT_NEO), false);
    }
    st7565_advance_page(true);

    // Lower section
    char  version[] = QMK_VERSION;
    char *token     = strtok(version, "-");

    st7565_write_P(qmk_logo[2], false);
    st7565_write_P(PSTR(DISPLAY_RENDER_VERSION_NAME), false);
    st7565_write_P(PSTR(token), false);
    st7565_advance_page(true);
}

__attribute__((weak)) bool st7565_render_status_left_keymap(void) { return false; }
void                       st7565_render_status_left(void) {
    if (!st7565_render_status_right_keymap()) {
        st7565_render_neo_layer_state();
        st7565_render_mod_status(get_mods() | get_oneshot_mods());
    }
}

__attribute__((weak)) bool st7565_render_status_right_keymap(void) { return false; }
void                       st7565_render_status_right(void) {
    if (!st7565_render_status_left_keymap()) {
        st7565_render_keylock_status(host_keyboard_leds());
    }
}

__attribute__((weak)) display_rotation_t st7565_init_keymap(display_rotation_t rotation) { return rotation; }
display_rotation_t                       st7565_init_user(display_rotation_t rotation) { return st7565_init_keymap(rotation); }

void st7565_task_user(void) {
    if (is_keyboard_left()) {
        st7565_render_status_left();
    } else {
        st7565_render_status_right();
    }
}
