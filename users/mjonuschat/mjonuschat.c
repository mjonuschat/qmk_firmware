// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"

userspace_config_t userspace_config;

bool mod_key_press_timer(uint16_t code, uint16_t mod_code, bool pressed) {
    static uint16_t this_timer;
    if (pressed) {
        this_timer = timer_read();
    } else {
        if (timer_elapsed(this_timer) < TAPPING_TERM) {
            tap_code(code);
        } else {
            register_code(mod_code);
            tap_code(code);
            unregister_code(mod_code);
        }
    }
    return false;
}

bool mod_key_press(uint16_t code, uint16_t mod_code, bool pressed, uint16_t this_timer) {
    if (pressed) {
        this_timer = timer_read();
    } else {
        if (timer_elapsed(this_timer) < TAPPING_TERM) {
            tap_code(code);
        } else {
            register_code(mod_code);
            tap_code(code);
            unregister_code(mod_code);
        }
    }
    return false;
}

bool has_all_bits_in_mask(uint8_t value, uint8_t mask) {
    value &= 0xF;
    mask &= 0xF;

    return (value & mask) == mask;
}

// Send a key tap with an optional set of modifiers.
void tap_code16_with_mods(uint16_t keycode, uint8_t force_modifiers) {
    uint8_t active_modifiers = get_mods();

    if ((force_modifiers & MOD_MASK_SHIFT) && !(active_modifiers & MOD_MASK_SHIFT)) register_code(KC_LSFT);
    if ((force_modifiers & MOD_MASK_CTRL) && !(active_modifiers & MOD_MASK_CTRL)) register_code(KC_LCTRL);
    if ((force_modifiers & MOD_MASK_ALT) && !(active_modifiers & MOD_MASK_ALT)) register_code(KC_LALT);
    if ((force_modifiers & MOD_MASK_GUI) && !(active_modifiers & MOD_MASK_GUI)) register_code(KC_LGUI);

    register_code(keycode);
    unregister_code(keycode);

    if ((force_modifiers & MOD_MASK_SHIFT) && !(active_modifiers & MOD_MASK_SHIFT)) unregister_code(KC_LSFT);
    if ((force_modifiers & MOD_MASK_CTRL) && !(active_modifiers & MOD_MASK_CTRL)) unregister_code(KC_LCTRL);
    if ((force_modifiers & MOD_MASK_ALT) && !(active_modifiers & MOD_MASK_ALT)) unregister_code(KC_LALT);
    if ((force_modifiers & MOD_MASK_GUI) && !(active_modifiers & MOD_MASK_GUI)) unregister_code(KC_LGUI);
}

void tap_code16_no_mods(uint16_t kc) {
    uint8_t temp_mod = get_mods();
    clear_mods();
    clear_oneshot_mods();
    tap_code16(kc);
    set_mods(temp_mod);
}

#if defined HOST_OS_MACOS
void        german_letter(uint16_t keycode) {
    uint8_t temp_mod = get_mods();
    clear_mods();
    clear_oneshot_mods();
    switch (keycode) {
        case NEO_SMALL_SHARP_S:
            tap_code16(NEO_SMALL_SHARP_S);
            break;
        case NEO_CAPITAL_SHARP_S:
            tap_code16(S(NEO_S));
            tap_code16(S(NEO_S));
            break;
        default:
            tap_code16(A(NEO_U));
            tap_code16(keycode);
            break;
    }
    set_mods(temp_mod);
}
#endif
