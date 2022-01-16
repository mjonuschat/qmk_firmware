// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mjonuschat.h"

#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)
#define OS_LCTRL OSM(MOD_LCTL)
#define OS_RCTRL OSM(MOD_RCTL)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_RGUI OSM(MOD_LGUI)

// clang-format off
#define LAYOUT_dactyl_pretty(                                                           \
    K00, K01, K02, K03, K04, K05,                   K06, K07, K08, K09, K0A, K0B,       \
    K10, K11, K12, K13, K14, K15,                   K16, K17, K18, K19, K1A, K1B,       \
    K20, K21, K22, K23, K24, K25,                   K26, K27, K28, K29, K2A, K2B,       \
    K30, K31, K32, K33, K34, K35,                   K36, K37, K38, K39, K3A, K3B,       \
              K40, K41,                                       K42, K43,                 \
                        K50, K51, K52,    K53, K54, K55,                                \
                             K60, K61,    K62, K63                                      \
    )                                                                                   \
    LAYOUT_5x6(                                                                         \
        K00, K01, K02, K03, K04, K05,                   K06, K07, K08, K09, K0A, K0B,   \
        K10, K11, K12, K13, K14, K15,                   K16, K17, K18, K19, K1A, K1B,   \
        K20, K21, K22, K23, K24, K25,                   K26, K27, K28, K29, K2A, K2B,   \
        K30, K31, K32, K33, K34, K35,                   K36, K37, K38, K39, K3A, K3B,   \
                  K40, K41,                                       K42, K43,             \
                            K50, _______,           _______, K55,                       \
                            K60, K51,                   K54, K63,                       \
                            K61, K52,                   K53, K62                        \
    )

#define LAYOUT_dactyl_wrapper(...)          LAYOUT_5x6(__VA_ARGS__)
#define LAYOUT_dactyl_pretty_wrapper(...)   LAYOUT_dactyl_pretty(__VA_ARGS__)

#define LAYOUT_dactyl_pretty_base(                          \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B,  \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B,  \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A,       \
    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A        \
  )                                                         \
  LAYOUT_dactyl_pretty_wrapper(                                                                                                                                 \
      MEH_T(KC_ESC),K01,        K02,        K03,        K04,        K05,                K06,        K07,        K08,        K09,        K0A,        K0B,        \
      KC_TAB,       K11,        K12,        K13,        K14,        K15,                K16,        K17,        K18,        K19,        K1A,        K1B,        \
      NEO_LMOD3,    K21,        K22,        K23,        K24,        K25,                K26,        K27,        K28,        K29,        K2A,        NEO_RMOD3,  \
      KC_LSHIFT,    K31,        K32,        K33,        K34,        K35,                K36,        K37,        K38,        K39,        K3A,        KC_RSHIFT,  \
                    MO(_MEDIA), NEO_LMOD4,                                                                                  NEO_RMOD4,  MO(_MEDIA),             \
                                            OS_LGUI,    OS_LCTRL,   OS_LALT,            OS_RGUI,    OS_RCTRL,   OS_RALT,                                        \
                                                        KC_BSPACE,  KC_DELETE,          KC_ENTER,   KC_SPACE                                                    \
  )

#define LAYOUT_base_wrapper(...)       LAYOUT_dactyl_pretty_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NEO_LAYER_1] = LAYOUT_base_wrapper(
        ___________________NEO1_L1_________________, ___________________NEO1_R1_________________, NEO_1_MINS,
        ___________________NEO1_L2_________________, ___________________NEO1_R2_________________, NEO_1_SS,
        ___________________NEO1_L3_________________, ___________________NEO1_R3_________________,
        ___________________NEO1_L4_________________, ___________________NEO1_R4_________________
    ),
    [_NEO_LAYER_2] = LAYOUT_base_wrapper(
        ___________________NEO2_L1_________________, ___________________NEO2_R1_________________, NEO_2_MINS,
        ___________________NEO2_L2_________________, ___________________NEO2_R2_________________, NEO_2_SS,
        ___________________NEO2_L3_________________, ___________________NEO2_R3_________________,
        ___________________NEO2_L4_________________, ___________________NEO2_R4_________________
    ),
    [_NEO_LAYER_3] = LAYOUT_base_wrapper(
        ___________________NEO3_L1_________________, ___________________NEO3_R1_________________, NEO_3_MINS,
        ___________________NEO3_L2_________________, ___________________NEO3_R2_________________, NEO_3_SS,
        ___________________NEO3_L3_________________, ___________________NEO3_R3_________________,
        ___________________NEO3_L4_________________, ___________________NEO3_R4_________________
    ),
    [_NEO_LAYER_4] = LAYOUT_base_wrapper(
        ___________________NEO4_L1_________________, ___________________NEO4_R1_________________, NEO_4_MINS,
        ___________________NEO4_L2_________________, ___________________NEO4_R2_________________, NEO_4_SS,
        ___________________NEO4_L3_________________, ___________________NEO4_R3_________________,
        ___________________NEO4_L4_________________, ___________________NEO4_R4_________________
    ),
    [_NEO_LAYER_5] = LAYOUT_base_wrapper(
        ___________________NEO5_L1_________________, ___________________NEO5_R1_________________, NEO_5_MINS,
        ___________________NEO5_L2_________________, ___________________NEO5_R2_________________, NEO_5_SS,
        ___________________NEO5_L3_________________, ___________________NEO5_R3_________________,
        ___________________NEO5_L4_________________, ___________________NEO5_R4_________________
    ),
    [_NEO_LAYER_6] = LAYOUT_base_wrapper(
        ___________________NEO6_L1_________________, ___________________NEO6_R1_________________, NEO_6_MINS,
        ___________________NEO6_L2_________________, ___________________NEO6_R2_________________, NEO_6_SS,
        ___________________NEO6_L3_________________, ___________________NEO6_R3_________________,
        ___________________NEO6_L4_________________, ___________________NEO6_R4_________________
    ),
    [_MEDIA] = LAYOUT_dactyl_pretty_wrapper(                                                                                \
        RESET,   _________________FUNC_LEFT_________________,       _________________FUNC_RIGHT________________, OSM_CLEAR, \
        _______, ___________________BLANK___________________,       ___________________BLANK___________________, _______,   \
        _______, ___________________BLANK___________________,       ___________________BLANK___________________, _______,   \
        _______, ___________________BLANK___________________,       ___________________BLANK___________________, _______,   \
        _______, _______,                                                                               _______, _______,   \
                            KC_MPLY,   KC_MNXT,    KC_MPRV,         _______,    _______,    _______,                        \
                                        KC_VOLU,  KC_VOLD,          _______,    _______                                     \
    ),
};
// clang-format on