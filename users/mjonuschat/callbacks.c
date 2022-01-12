// Copyright 2021 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"

__attribute__((weak)) void keyboard_pre_init_keymap(void) {}
void                       keyboard_pre_init_user(void) {
    userspace_config.raw = eeconfig_read_user();
    keyboard_pre_init_keymap();
}

// Add reconfigurable functions here, for keymap customization
// This allows for a global, userspace functions, and continued
// customization of the keymap.  Use _keymap instead of _user
// functions in the keymaps
// Call user matrix init, set default RGB colors and then
// call the keymap's init function
__attribute__((weak)) void matrix_init_keymap(void) {}
void                       matrix_init_user(void) {
#if defined(BOOTLOADER_CATERINA) && defined(__AVR__) && defined(__AVR_ATmega32U4__)
    DDRD &= ~(1 << 5);
    PORTD &= ~(1 << 5);

    DDRB &= ~(1 << 0);
    PORTB &= ~(1 << 0);
#endif
    matrix_init_keymap();
}

__attribute__((weak)) void keyboard_post_init_keymap(void) {}
void                       keyboard_post_init_user(void) {
#if defined(RGBLIGHT_ENABLE)
    keyboard_post_init_rgb_light();
#endif
#if defined(RGB_MATRIX_ENABLE)
    keyboard_post_init_rgb_matrix();
#endif
    keyboard_post_init_keymap();
}

#ifdef RGB_MATRIX_ENABLE
void rgb_matrix_update_pwm_buffers(void);
#endif

__attribute__((weak)) void shutdown_keymap(void) {}
void                       shutdown_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(1);
    rgblight_setrgb_red();
#endif  // RGBLIGHT_ENABLE
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_color_all(0xFF, 0x00, 0x00);
    rgb_matrix_update_pwm_buffers();
#endif  // RGB_MATRIX_ENABLE
#ifdef OLED_ENABLE
    oled_off();
#endif

    shutdown_keymap();
}

__attribute__((weak)) void suspend_power_down_keymap(void) {}

void suspend_power_down_user(void) {
#ifdef OLED_ENABLE
    oled_off();
#endif
    suspend_power_down_keymap();
}

__attribute__((weak)) void suspend_wakeup_init_keymap(void) {}
void                       suspend_wakeup_init_user(void) {
    if (layer_state_is(_QWERTY)) {
        layer_off(_QWERTY);
    }

    suspend_wakeup_init_keymap();
}

// No global matrix scan code, so just run keymap's matrix
// scan function
__attribute__((weak)) void matrix_scan_keymap(void) {}
void                       matrix_scan_user(void) {
    static bool has_ran_yet;
    if (!has_ran_yet) {
        has_ran_yet = true;
        startup_user();
    }

#if defined(RGBLIGHT_ENABLE)
    matrix_scan_rgb_light();
#endif  // RGBLIGHT_ENABLE
#if defined(RGB_MATRIX_ENABLE)
    matrix_scan_rgb_matrix();
#endif

    matrix_scan_keymap();
}

// on layer change, no matter where the change was initiated
// Then runs keymap's layer change check
__attribute__((weak)) layer_state_t layer_state_set_keymap(layer_state_t state) { return state; }
layer_state_t                       layer_state_set_user(layer_state_t state) {
    if (!is_keyboard_master()) {
        return state;
    }

    state = update_tri_layer_state(state, _NEO_LAYER_2, _NEO_LAYER_3, _NEO_LAYER_5);
    state = update_tri_layer_state(state, _NEO_LAYER_3, _NEO_LAYER_4, _NEO_LAYER_6);
#if defined(RGBLIGHT_ENABLE)
    state = layer_state_set_rgb_light(state);
#endif  // RGBLIGHT_ENABLE
    state = layer_state_set_keymap(state);
    return state;
}

// Runs state check and changes underglow color and animation
__attribute__((weak)) layer_state_t default_layer_state_set_keymap(layer_state_t state) { return state; }
layer_state_t                       default_layer_state_set_user(layer_state_t state) {
    if (!is_keyboard_master()) {
        return state;
    }

    state = default_layer_state_set_keymap(state);
#if 0
#    if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
  state = default_layer_state_set_rgb(state);
#    endif  // RGBLIGHT_ENABLE
#endif
    return state;
}

__attribute__((weak)) void led_set_keymap(uint8_t usb_led) {}
void                       led_set_user(uint8_t usb_led) { led_set_keymap(usb_led); }

__attribute__((weak)) void eeconfig_init_keymap(void) {}
void                       eeconfig_init_user(void) {
    userspace_config.raw              = 0;
    userspace_config.rgb_layer_change = true;
    eeconfig_update_user(userspace_config.raw);
    eeconfig_init_keymap();
}

#ifdef SPLIT_KEYBOARD
__attribute__((weak)) void matrix_slave_scan_keymap(void) {}
void                       matrix_slave_scan_user(void) {
#    ifdef LED_MATRIX_ENABLE
    led_matrix_task();
#    endif

    matrix_slave_scan_keymap();
}
#endif
