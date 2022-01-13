/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mjonuschat.h"

LEADER_EXTERNS();

/*
 * The `LAYOUT_ergodox_pretty_base` macro is a template to allow the use of
 * identical modifiers for the default layouts (eg QWERTY, Colemak, Dvorak,
 * etc), so that there is no need to set them up for each layout, and modify
 * all of them if I want to change them.  This helps to keep consistency and
 * ease of use. K## is a placeholder to pass through the individual keycodes
 */
// clang-format off
#define LAYOUT_ergodox_wrapper(...)          LAYOUT_ergodox(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)

#define LAYOUT_ergodox_pretty_base(                         \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B,  \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B,  \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,       \
    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A        \
  )                                                         \
  LAYOUT_ergodox_pretty_wrapper(                                                                                                                                                            \
      KC_ESC,       K01,        K02,        K03,        K04,        K05,        KC_LEAD,            TT(_QWERTY),    K06,        K07,        K08,        K09,        K0A,        K0B,        \
      KC_TAB,       K11,        K12,        K13,        K14,        K15,        KC_LCTRL,           KC_RCTRL,       K16,        K17,        K18,        K19,        K1A,        K1B,        \
      NEO_LMOD3,    K21,        K22,        K23,        K24,        K25,                                            K26,        K27,        K28,        K29,        K2A,        NEO_RMOD3,  \
      KC_LSHIFT,    K31,        K32,        K33,        K34,        K35,        KC_LALT,            KC_RALT,        K36,        K37,        K38,        K39,        K3A,        KC_RSHIFT,  \
      KC_MEH,       KC_HYPR,    KC_LCTRL,   KC_LALT,    KC_LGUI,                                                                KC_RGUI,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   \
                                                                    MO(_MEDIA), KC_HOME,            KC_PGUP,        MO(_MEDIA),                                                             \
                                                                                KC_END,             KC_PGDOWN,                                                                              \
                                                        KC_BSPACE,  KC_DELETE,  NEO_LMOD4,          NEO_RMOD4,      KC_ENTER,   KC_SPACE                                                    \
  )

#define LAYOUT_base_wrapper(...)       LAYOUT_ergodox_pretty_base(__VA_ARGS__)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* NEO_1: Lowercase layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  |   1  |   2  |   3  |   4  |   5  |  ESC |           | US_1 |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TAB   |   x  |   v  |   l  |   c  |   w  | LCTL |           | RCTL |   k  |   h  |   g  |   f  |   q  |   ß    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  NEO_3 |   u  |   i  |   a  |   e  |   o  |------|           |------|   s  |   n  |   r  |   t  |   d  |   y    |
     * |--------+------+------+------+------+------| LALT |           | RALT |------+------+------+------+------+--------|
     * | LSHIFT |   ü  |   ö  |   ä  |   p  |   z  |      |           |      |   b  |   m  |   ,  |   .  |   j  | RSHIFT |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | MEH  | HYPR | LCTL | LALT | LGUI |                                       | RGUI | Left | Down |  Up  | Right|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | FKEYS| Home |       | PgUp | FKEYS|
     *                                 ,------|------|------|       |------+------+------.
     *                                 | Back-|      | End  |       | PgDn |      |      |
     *                                 | space|Delete|------|       |------| Enter|Space |
     *                                 |      |      | NEO_4|       | NEO_4|      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_1] = LAYOUT_base_wrapper(
        ___________________NEO1_L1_________________, ___________________NEO1_R1_________________, NEO_1_MINS,
        ___________________NEO1_L2_________________, ___________________NEO1_R2_________________, NEO_1_SS,
        ___________________NEO1_L3_________________, ___________________NEO1_R3_________________,
        ___________________NEO1_L4_________________, ___________________NEO1_R4_________________
    ),
    /* NEO_2: Uppercase layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  |   °  |   §  |      |   »  |   «  |  ESC |           | US_1 |   $  |   €  |   „  |   “  |   ”  |   —    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TAB   |   X  |   V  |   L  |   C  |   W  | LCTL |           | RCTL |   K  |   H  |   G  |   F  |   Q  |   SS   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  NEO_3 |   U  |   I  |   A  |   E  |   O  |------|           |------|   S  |   N  |   R  |   T  |   D  |   Y    |
     * |--------+------+------+------+------+------| LALT |           | RALT |------+------+------+------+------+--------|
     * | LSHIFT |   Ü  |   Ö  |   Ä  |   P  |   Z  |      |           |      |   B  |   M  |   –   |  •  |   J  | RSHIFT |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | MEH  | HYPR | LCTL | LALT | LGUI |                                       | RGUI | Left | Down |  Up  | Right|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | FKEYS| Home |       | PgUp | FKEYS|
     *                                 ,------|------|------|       |------+------+------.
     *                                 | Back-|      | End  |       | PgDn |      |      |
     *                                 | space|Delete|------|       |------| Enter|Space |
     *                                 |      |      | NEO_4|       | NEO_4|      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_2] = LAYOUT_base_wrapper(
        ___________________NEO2_L1_________________, ___________________NEO2_R1_________________, NEO_2_MINS,
        ___________________NEO2_L2_________________, ___________________NEO2_R2_________________, NEO_2_SS,
        ___________________NEO2_L3_________________, ___________________NEO2_R3_________________,
        ___________________NEO2_L4_________________, ___________________NEO2_R4_________________
    ),
    /* NEO_3: Symbol layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  | ---- | ---- | ---- |   ›  |   ‹  |      |           |      |   ¢ 	|   ¥  |   ‚  |   ‘  |   ’  |  ----  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  ----  |   …  |   _  |   [  |   ]  |   ^  |      |           |      |   !  |   <  |   >  |   =  |   &  |  ----  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   \  |   /  |   {  |   }  |   *  |------|           |------|   ?  |   (  |   )  |   -  |   :  |   @    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   #  |   $  |   |  |   ~  |   `  |      |           |      |   +  |   %  |   "  |   '  |   ;  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_3] = LAYOUT_base_wrapper(
        ___________________NEO3_L1_________________, ___________________NEO3_R1_________________, NEO_3_MINS,
        ___________________NEO3_L2_________________, ___________________NEO3_R2_________________, NEO_3_SS,
        ___________________NEO3_L3_________________, ___________________NEO3_R3_________________,
        ___________________NEO3_L4_________________, ___________________NEO3_R4_________________
    ),
    /* NEO_4: Cursor & Numpad
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  |   ª  |   º  | ---- |   ·  |   £  |      |           |      | ---- | Tab  |   /  |   *  |   -  |  ----  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  ----  | PgUp |   ⌫  |  Up  |   ⌦  | PgDn |      |           |      |   ¡  |   7  |   8  |   9  |   +  |   –    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | Home | Left | Down | Right| End  |------|           |------|   ¿  |   4  |   5  |   6  |   ,  |   .    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | Esc  | Tab  | Ins  |Return| ---- |      |           |      |   :  |   1  |   2  |   3  |   ;  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |   0  |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_4] = LAYOUT_base_wrapper(
        ___________________NEO4_L1_________________, ___________________NEO4_R1_________________, NEO_4_MINS,
        ___________________NEO4_L2_________________, ___________________NEO4_R2_________________, NEO_4_SS,
        ___________________NEO4_L3_________________, ___________________NEO4_R3_________________,
        ___________________NEO4_L4_________________, ___________________NEO4_R4_________________
    ),
    /* NEO_5: Greek
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  | ---- | ---- | ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  ----  | ---- | ---- | ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | ---- |  ----| ---- | ---- | ---- |------|           |------| ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | ---- |  ----| ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_5] = LAYOUT_base_wrapper(
        ___________________NEO5_L1_________________, ___________________NEO5_R1_________________, NEO_5_MINS,
        ___________________NEO5_L2_________________, ___________________NEO5_R2_________________, NEO_5_SS,
        ___________________NEO5_L3_________________, ___________________NEO5_R3_________________,
        ___________________NEO5_L4_________________, ___________________NEO5_R4_________________
    ),
    /* NEO_6: Math symbols
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ----  | ---- | ---- | ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  ----  | ---- | ---- | ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | ---- |  ----| ---- | ---- | ---- |------|           |------| ---- | ---- | ---- | ---- | ---- |  ----  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | ---- |  ----| ---- | ---- | ---- |      |           |      | ---- | ---- | ---- | ---- | ---- |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_NEO_LAYER_6] = LAYOUT_base_wrapper(
        ___________________NEO6_L1_________________, ___________________NEO6_R1_________________, NEO_6_MINS,
        ___________________NEO6_L2_________________, ___________________NEO6_R2_________________, NEO_6_SS,
        ___________________NEO6_L3_________________, ___________________NEO6_R3_________________,
        ___________________NEO6_L4_________________, ___________________NEO6_R4_________________
    ),
    /* US_1: US QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  | ESC  |           | NEO_1|   6  |   7  |   8  |   9  |   0  |    -   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   \    |   Q  |   W  |   E  |   R  |   T  | ---- |           |   [  |   Y  |   U  |   I  |   O  |   P  |    ]   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  TAB   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |    '   |
     * |--------+------+------+------+------+------| ---- |           | ---- |------+------+------+------+------+--------|
     * | LSHIFT |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RSHIFT |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGUI |   `  | ---- | ---- | FKEYS|                                       | Left | Down |  Up  | Right| RGUI |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LCTRL| LALT |       | RALT | RCTRL|
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | HOME |       | PGUP |      |      |
     *                                 | BKSP | DEL  |------|       |------| ENTR | SPCE |
     *                                 |      |      | END  |       | PGDN |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_QWERTY] = LAYOUT_ergodox_pretty_wrapper(                                                                                                                                  \
        KC_EQUAL,       ________________NUMBER_LEFT________________,    KC_ESCAPE,          TO(_NEO_LAYER_1),   ________________NUMBER_RIGHT_______________,    KC_MINUS,       \
        KC_BSLASH,      _________________QWERTY_L1_________________,    KC_NO,              KC_LBRACKET,        _________________QWERTY_R1_________________,    KC_RBRACKET,    \
        KC_TAB,         _________________QWERTY_L2_________________,                                            _________________QWERTY_R2_________________,    KC_QUOTE,       \
        KC_LSHIFT,      _________________QWERTY_L3_________________,    KC_NO,              KC_NO,              _________________QWERTY_R3_________________,    KC_RSHIFT,      \
        KC_LGUI,       KC_GRAVE,    KC_NO,   KC_NO,    KC_LGUI,                                                 KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_RGUI,        \
                                                          KC_LCTRL,     KC_LALT,            KC_RALT,            KC_RCTRL,                                                       \
                                                                        KC_HOME,            KC_PGUP,                                                                            \
                                                KC_BSPACE,  KC_DELETE,  KC_END,             KC_PGDOWN,          KC_ENTER,   KC_SPACE                                            \
    ),
    /* FKEYS: Function keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Prev  |  F1  |  F2  |  F3  |  F4  |  F5  |  F11 |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |  VolUp |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Play  |      |      |      |      |      |      |           |      |      |      |      |      |      |  VolDn |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Next  |      |      |      |      |      |------|           |------|      |      |      |      |      |  Mute  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    [_MEDIA] = LAYOUT_ergodox_pretty_wrapper(                                                                                                                                       \
        KC_MEDIA_REWIND,        _________________FUNC_LEFT_________________,    KC_F11,             KC_F12,     _________________FUNC_RIGHT________________,   KC_AUDIO_VOL_UP,     \
        KC_MEDIA_PLAY_PAUSE,    ___________________BLANK___________________,    _______,            _______,    ___________________BLANK___________________,   KC_AUDIO_VOL_DOWN,   \
        KC_MEDIA_FAST_FORWARD,  ___________________BLANK___________________,                                    ___________________BLANK___________________,   KC_AUDIO_VOL_DOWN,   \
        _______,                ___________________BLANK___________________,    _______,            _______,    ___________________BLANK___________________,   _______,             \
                                ___________________BLANK___________________,                                    ___________________BLANK___________________,                        \
                                                                    _______,    _______,            _______,    _______,                                                            \
                                                                                _______,            _______,                                                                        \
                                                        _______,    _______,    _______,            _______,    _______,   _______                                                  \
    ),
};
// clang-format on
#ifdef ST7565_ENABLE
bool st7565_active_user = false;

void ergodox_infinity_lcd_color_rgb(uint8_t r, uint8_t g, uint8_t b) {
    // 16 bit RGB values
    ergodox_infinity_lcd_color(r * 257, g * 257, b * 257);
}

void ergodox_infinity_layer_state_color(void) {
    if (!st7565_active_user) {
        return;
    }

    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _NEO_LAYER_6:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_6_RGB);
            break;
        case _NEO_LAYER_5:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_5_RGB);
            break;
        case _NEO_LAYER_4:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_4_RGB);
            break;
        case _NEO_LAYER_3:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_3_RGB);
            break;
        case _NEO_LAYER_2:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_2_RGB);
            break;
        default:
            ergodox_infinity_lcd_color_rgb(NEO_LAYER_1_RGB);
            break;
    }
}

void st7565_on_user(void) {
    st7565_active_user = true;
    ergodox_infinity_layer_state_color();
}

void st7565_off_user(void) {
    st7565_active_user = false;
    ergodox_infinity_lcd_color_rgb(0, 0, 0);
}
#endif

void keyboard_pre_init_keymap(void) {
#ifdef ST7565_ENABLE
    st7565_active_user = true;
#endif
}

void matrix_slave_scan_keymap(void) {
#ifdef ST7565_ENABLE
    ergodox_infinity_layer_state_color();
#endif
}

void matrix_scan_keymap(void) {  // runs frequently to update info
#ifdef ST7565_ENABLE
    ergodox_infinity_layer_state_color();
#endif

    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        // Moom - move and zoom windows
        SEQ_TWO_KEYS(NEO_M, KC_LEFT) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_LEFT);
        }
        SEQ_TWO_KEYS(NEO_M, KC_RIGHT) {
            tap_code16(MEH(KC_M));
            tap_code(KC_RIGHT);
        }
        SEQ_TWO_KEYS(NEO_M, KC_UP) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_UP);
        }
        SEQ_TWO_KEYS(NEO_M, KC_DOWN) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_DOWN);
        }

        SEQ_TWO_KEYS(NEO_M, KC_H) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_U);
        }
        SEQ_TWO_KEYS(NEO_M, KC_G) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_I);
        }
        SEQ_TWO_KEYS(NEO_M, KC_N) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_J);
        }
        SEQ_TWO_KEYS(NEO_M, KC_R) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_K);
        }

        SEQ_TWO_KEYS(NEO_M, KC_A) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_D);
        }
        SEQ_TWO_KEYS(NEO_M, KC_L) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_E);
        }
        SEQ_TWO_KEYS(NEO_M, KC_E) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_F);
        }
        SEQ_TWO_KEYS(NEO_M, KC_W) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_T);
        }
        SEQ_TWO_KEYS(NEO_M, KC_O) {
            tap_code16(MEH(NEO_M));
            tap_code(NEO_G);
        }

        SEQ_TWO_KEYS(KC_M, NEO_1) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_1);
        }
        SEQ_TWO_KEYS(KC_M, NEO_2) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_2);
        }
        SEQ_TWO_KEYS(KC_M, NEO_3) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_3);
        }
        SEQ_TWO_KEYS(KC_M, NEO_4) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_4);
        }
        SEQ_TWO_KEYS(KC_M, NEO_5) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_5);
        }
        SEQ_TWO_KEYS(KC_M, NEO_6) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_6);
        }
        SEQ_TWO_KEYS(KC_M, NEO_COMMA) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_COMMA);
        }
        SEQ_TWO_KEYS(KC_M, NEO_DOT) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_DOT);
        }
        SEQ_TWO_KEYS(KC_M, KC_M) {
            tap_code16(MEH(KC_M));
            tap_code(NEO_M);
        }

        SEQ_THREE_KEYS(NEO_M, KC_LEFT, KC_LEFT) {
            tap_code16(MEH(NEO_M));
            tap_code16(MEH(KC_LEFT));
        }
        SEQ_THREE_KEYS(NEO_M, KC_RIGHT, KC_RIGHT) {
            tap_code16(MEH(NEO_M));
            tap_code16(MEH(KC_RIGHT));
        }

        SEQ_TWO_KEYS(NEO_M, KC_ENTER) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_ENTER);
        }
        SEQ_TWO_KEYS(NEO_M, NEO_C) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_C);
        }
        SEQ_TWO_KEYS(NEO_M, KC_BSPACE) {
            tap_code16(MEH(NEO_M));
            tap_code(KC_BSPACE);
        }
    }
}
