// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"
#include "version.h"
#ifdef __AVR__
#    include <avr/wdt.h>
#endif

struct DualTapHoldKeyState shift_state;
struct DualTapHoldKeyState neo3_state;

void update_layer_state(void) {
    if (shift_state.lkey_pressed || shift_state.rkey_pressed) {
        layer_on(_NEO_LAYER_2);
    } else {
        layer_off(_NEO_LAYER_2);
    }

    if (neo3_state.lkey_pressed || neo3_state.rkey_pressed) {
        // Enable NEO layer 3
        layer_on(_NEO_LAYER_3);
    } else {
        layer_off(_NEO_LAYER_3);
    }
}

#ifndef UNICODE_ENABLE
// Special remapping for keys with different keycodes/macros when used with shift modifiers.
bool process_record_user_neo_layer_1(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_CIRCUMFLEX);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_GRAVE);
            break;

        // Row 2
        // ================================================================================
        case NEO_1_SS:
            german_letter(KC_S);
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_ACUTE);
            break;

        // Row 4
        // ================================================================================
        case NEO_1_UE:
            german_letter(NEO_U);
            break;
        case NEO_1_OE:
            german_letter(NEO_O);
            break;
        case NEO_1_AE:
            german_letter(NEO_A);
            break;
        default:
            return true;
    }

    return false;
}

bool process_record_user_neo_layer_2(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

#    ifdef HOST_OS_MACOS
    if (get_mods() & MOD_MASK_GUI) {
        switch (keycode) {
            // Row 1
            // ================================================================================
            case NEO_2_3:
                tap_code16_no_mods(S(G(KC_3)));
                return false;
            case NEO_2_4:
                tap_code16_no_mods(S(G(KC_4)));
                return false;
            case NEO_2_5:
                tap_code16_no_mods(S(G(KC_5)));
                return false;
        }
    }
#    endif

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_CARON);
            break;
        case NEO_2_1:
        case NEO_2_2:
        case NEO_2_3:
        case NEO_2_4:
        case NEO_2_5:
        case NEO_2_6:
        case NEO_2_7:
        case NEO_2_8:
        case NEO_2_9:
        case NEO_2_0:
        case NEO_2_MINS:
            tap_code16_no_mods(keycode);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_CEDILLA);
            break;

        // Row 2
        // ================================================================================
        case NEO_2_SS:
            german_letter(S(KC_S));
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_SMALL_TILDE);
            break;

        // Row 4
        // ================================================================================
        case NEO_2_UE:
            german_letter(S(NEO_U));
            break;
        case NEO_2_OE:
            german_letter(S(NEO_O));
            break;
        case NEO_2_AE:
            german_letter(S(NEO_A));
            break;
        case NEO_2_COMM:
        case NEO_2_DOT:
            tap_code16_no_mods(keycode);
            break;
        default:
            return true;
    }

    return false;
}

bool process_record_user_neo_layer_3(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_COCA);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_RING_ABOVE);
            break;

        // Row 2
        // ================================================================================
        case NEO_3_SS:
            tap_code16_no_mods(NEO_SMALL_LONG_S);
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_MINUS);
            break;
        default:
            return true;
    }

    return false;
}

bool process_record_user_neo_layer_4(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_DOT_ABOVE);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_DIAERESIS);
            break;

        // Row 2
        // ================================================================================
        case NEO_4_SS:
            tap_code16_no_mods(NEO_MINUS);
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_DOUBLE_ACUTE);
            break;

        // Row 5
        // ================================================================================
        case NEO_SPACE:
            tap_code16_no_mods(NEO_4_SPC);
            break;

        default:
            return true;
    }

    return false;
}

bool process_record_user_neo_layer_5(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_RHOTIC_HOOK);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_GREEK_DASIA);
            break;

        // Row 2
        // ================================================================================
        case NEO_4_SS:
            tap_code16_no_mods(NEO_GREEK_SMALL_SIGMA);
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_GREEK_SPILI);
            break;

        // Row 5
        // ================================================================================
        case NEO_SPACE:
            tap_code16_no_mods(NEO_5_SPC);
            break;

        default:
            return true;
    }

    return false;
}

bool process_record_user_neo_layer_6(uint16_t keycode, keyrecord_t *record) {
    // Early return on key release
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        // Row 1
        // ================================================================================
        case NEO_DEAD_1:
            tap_code16_no_mods(NEO_DEAD_FULL_STOP);
            break;
        case NEO_DEAD_2:
            tap_code16_no_mods(NEO_DEAD_MACRON);
            break;

        // Row 2
        // ================================================================================
        case NEO_6_SS:
            tap_code16_no_mods(NEO_RING_OPERATOR);
            break;
        case NEO_DEAD_3:
            tap_code16_no_mods(NEO_DEAD_BREVE);
            break;

        // Row 5
        // ================================================================================
        case NEO_SPACE:
            tap_code16_no_mods(NEO_6_SPC);
            break;

        default:
            return true;
    }

    return false;
}
#endif

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }
bool                       process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef KEYLOGGER_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %b, time: %5u, int: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif  // KEYLOGGER_ENABLE

#ifdef OLED_ENABLE
    process_record_user_oled(keycode, record);
#endif  // OLED

    if (!(process_record_keymap(keycode, record)
#ifdef RGB_MATRIX_ENABLE
          && process_record_user_rgb_matrix(keycode, record)
#endif
#ifdef RGBLIGHT_ENABLE
          && process_record_user_rgb_light(keycode, record)
#endif
          && true)) {
        return false;
    }

    switch (keycode) {
        case KC_LSHIFT:
            if (record->event.pressed) {
                shift_state.lkey_pressed = true;
            } else {
                shift_state.lkey_pressed = false;
            }

            update_layer_state();
            break;
        case KC_RSHIFT:
            if (record->event.pressed) {
                shift_state.rkey_pressed = true;
            } else {
                shift_state.rkey_pressed = false;
            }

            update_layer_state();
            break;
        case NEO_LMOD3:
            if (record->event.pressed) {
                neo3_state.lkey_timer   = timer_read();
                neo3_state.lkey_pressed = true;
                neo3_state.seen_other   = false;
            } else {
                neo3_state.lkey_pressed = false;
            }

            update_layer_state();
            break;
        case NEO_RMOD3:
            if (record->event.pressed) {
                neo3_state.rkey_timer   = timer_read();
                neo3_state.rkey_pressed = true;
                neo3_state.seen_other   = false;
            } else {
                neo3_state.rkey_pressed = false;
            }

            update_layer_state();

#ifdef NEO_RMOD3_ANSI
            if (!record->event.pressed) {
                // Was the NEO_RMOD3 key TAPPED?
                if (timer_elapsed(neo3_state.rkey_timer) <= TAPPING_TERM) {
                    if (neo3_state.lkey_pressed) {
                        // We are still in NEO_3 layer, send keycode and modifiers for @
                        tap_code16_with_mods(NEO_2, MOD_MASK_SHIFT);
                        return false;
                    } else {
                        // Do the normal key processing, send y
                        if (!neo3_state.seen_other) {
                            tap_code16_with_mods(NEO_Y, MOD_MASK_NONE);
                        }
                        return false;
                    }
                }
            }
#endif
            break;
        default:
            if (record->event.pressed && (neo3_state.lkey_pressed || neo3_state.rkey_pressed)) {
                // Track that we've seen a separate keypress event
                neo3_state.seen_other = true;
            }
            break;
    }

#ifndef UNICODE_ENABLE
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _NEO_LAYER_1:
            return process_record_user_neo_layer_1(keycode, record);
        case _NEO_LAYER_2:
            return process_record_user_neo_layer_2(keycode, record);
        case _NEO_LAYER_3:
            return process_record_user_neo_layer_3(keycode, record);
        case _NEO_LAYER_4:
            return process_record_user_neo_layer_4(keycode, record);
        case _NEO_LAYER_5:
            return process_record_user_neo_layer_5(keycode, record);
        case _NEO_LAYER_6:
            return process_record_user_neo_layer_6(keycode, record);
    }
#endif

    return true;
}

__attribute__((weak)) void post_process_record_keymap(uint16_t keycode, keyrecord_t *record) {}
void                       post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (shift_state.lkey_pressed && shift_state.rkey_pressed) {
        tap_code(KC_CAPS_LOCK);
    }

    post_process_record_keymap(keycode, record);
}
