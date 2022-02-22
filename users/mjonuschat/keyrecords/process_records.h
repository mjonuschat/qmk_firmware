// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "mjonuschat.h"

#if defined(KEYCODES_WINDOWS_US)
#    include "keyrecords/windows/en_us.h"
#else
#    include "keyrecords/macos/en_us.h"
#endif

struct DualTapHoldKeyState {
    bool     lkey_pressed;
    uint16_t lkey_timer;
    bool     rkey_pressed;
    uint16_t rkey_timer;
    bool     seen_other;
};

extern struct DualTapHoldKeyState shift_state;
extern struct DualTapHoldKeyState neo3_state;

enum userspace_custom_keycodes {
    PLACEHOLDER = SAFE_RANGE,  // can always be here

    NEO_DEAD_1,
    NEO_DEAD_2,
    NEO_DEAD_3,

    NEO_LMOD3,
    NEO_RMOD3,

    NEO_INTL_1,
    NEO_INTL_2,
    NEO_INTL_3,
    NEO_INTL_4,

    NEW_SAFE_RANGE  // use "NEW_SAFE_RANGE for keymap specific codes
};

// clang-format off
// bitmasks for modifier keys
#define MOD_MASK_NONE 0

#ifndef NEO_LAYER4_ANSI
#    define NEO_LMOD4        TT(_NEO_LAYER_4)
#    define NEO_RMOD4        NEO_LMOD4
#else
#    define NEO_LMOD4        LT(_NEO_LAYER_4, KC_TAB)
#    define NEO_RMOD4        TT(_NEO_LAYER_4)
#endif

// Row 1
// NEO_DEAD_1
#define NEO_1               KC_1
#define NEO_2               KC_2
#define NEO_3               KC_3
#define NEO_4               KC_4
#define NEO_5               KC_5
#define NEO_6               KC_6
#define NEO_7               KC_7
#define NEO_8               KC_8
#define NEO_9               KC_9
#define NEO_0               KC_0
#define NEO_HYPHEN_MINUS    KC_MINUS
// NEO_DEAD_2

// Row 2
#define NEO_X               KC_X
#define NEO_V               KC_V
#define NEO_L               KC_L
#define NEO_C               KC_C
#define NEO_W               KC_W
#define NEO_K               KC_K
#define NEO_H               KC_H
#define NEO_G               KC_G
#define NEO_F               KC_F
#define NEO_Q               KC_Q
// NEO_DEAD3
// Unicode: ß

// Row 3
#define NEO_U               KC_U
#define NEO_I               KC_I
#define NEO_A               KC_A
#define NEO_E               KC_E
#define NEO_O               KC_O
#define NEO_S               KC_S
#define NEO_N               KC_N
#define NEO_R               KC_R
#define NEO_T               KC_T
#define NEO_D               KC_D
#define NEO_Y               KC_Y
// NEO_RMOD4

// Row 4
// NEO_LMOD4
// Unicode: ü
// Unicode: ö
// Unicode: ä
#define NEO_P               KC_P
#define NEO_Z               KC_Z
#define NEO_B               KC_B
#define NEO_M               KC_M
#define NEO_COMMA           KC_COMMA
#define NEO_DOT             KC_DOT
#define NEO_J               KC_J

// Row 5
#define NEO_SPACE           KC_SPACE

//  __  ___  ___________    ____         ___       __       __       ___           _______. _______     _______.
// |  |/  / |   ____\   \  /   /        /   \     |  |     |  |     /   \         /       ||   ____|   /       |
// |  '  /  |  |__   \   \/   /        /  ^  \    |  |     |  |    /  ^  \       |   (----`|  |__     |   (----`
// |    <   |   __|   \_    _/        /  /_\  \   |  |     |  |   /  /_\  \       \   \    |   __|     \   \.
// |  .  \  |  |____    |  |         /  _____  \  |  `----.|  |  /  _____  \  .----)   |   |  |____.----)   |
// |__|\__\ |_______|   |__|        /__/     \__\ |_______||__| /__/     \__\ |_______/    |_______|_______/

// Layer 1 - Row 1
// ================================================================================
#define NEO_1_1     NEO_1
#define NEO_1_2     NEO_2
#define NEO_1_3     NEO_3
#define NEO_1_4     NEO_4
#define NEO_1_5     NEO_5
#define NEO_1_6     NEO_6
#define NEO_1_7     NEO_7
#define NEO_1_8     NEO_8
#define NEO_1_9     NEO_9
#define NEO_1_0     NEO_0
#define NEO_1_MINS  NEO_HYPHEN_MINUS

// Layer 1 - Row 2
// ================================================================================
#define NEO_1_X     NEO_X
#define NEO_1_V     NEO_V
#define NEO_1_L     NEO_L
#define NEO_1_C     NEO_C
#define NEO_1_W     NEO_W
#define NEO_1_K     NEO_K
#define NEO_1_H     NEO_H
#define NEO_1_G     NEO_G
#define NEO_1_F     NEO_F
#define NEO_1_Q     NEO_Q
#define NEO_1_SS    NEO_SMALL_SHARP_S

// Layer 1 - Row 3
// ================================================================================
#define NEO_1_U     NEO_U
#define NEO_1_I     NEO_I
#define NEO_1_A     NEO_A
#define NEO_1_E     NEO_E
#define NEO_1_O     NEO_O
#define NEO_1_S     NEO_S
#define NEO_1_N     NEO_N
#define NEO_1_R     NEO_R
#define NEO_1_T     NEO_T
#define NEO_1_D     NEO_D
#define NEO_1_Y     NEO_Y

// Layer 1 - Row 4
// ================================================================================
#define NEO_1_UE    NEO_SMALL_U_DIARESIS
#define NEO_1_OE    NEO_SMALL_O_DIARESIS
#define NEO_1_AE    NEO_SMALL_A_DIARESIS
#define NEO_1_P     NEO_P
#define NEO_1_Z     NEO_Z
#define NEO_1_B     NEO_B
#define NEO_1_M     NEO_M
#define NEO_1_COMM  NEO_COMMA
#define NEO_1_DOT   NEO_DOT
#define NEO_1_J     NEO_J

// Layer 1 - Row 5
// ================================================================================
#define NEO_1_SPC   NEO_SPACE

// Layer 2 - Row 1
// ================================================================================
#define NEO_2_1     NEO_DEGREE
#define NEO_2_2     NEO_SECTION
#define NEO_2_3     NEO_SCRIPT_SMALL_L
#define NEO_2_4     NEO_RDAQM
#define NEO_2_5     NEO_LDAQM
#define NEO_2_6     NEO_DOLLAR
#define NEO_2_7     NEO_EURO
#define NEO_2_8     NEO_DL9QM
#define NEO_2_9     NEO_LDQM
#define NEO_2_0     NEO_RDQM
#define NEO_2_MINS  NEO_EMDASH

// Layer 2 - Row 2
// ================================================================================
#define NEO_2_X     NEO_X
#define NEO_2_V     NEO_V
#define NEO_2_L     NEO_L
#define NEO_2_C     NEO_C
#define NEO_2_W     NEO_W
#define NEO_2_K     NEO_K
#define NEO_2_H     NEO_H
#define NEO_2_G     NEO_G
#define NEO_2_F     NEO_F
#define NEO_2_Q     NEO_Q
#define NEO_2_SS    NEO_CAPITAL_SHARP_S

// Layer 2 - Row 3
// ================================================================================
#define NEO_2_U     NEO_U
#define NEO_2_I     NEO_I
#define NEO_2_A     NEO_A
#define NEO_2_E     NEO_E
#define NEO_2_O     NEO_O
#define NEO_2_S     NEO_S
#define NEO_2_N     NEO_N
#define NEO_2_R     NEO_R
#define NEO_2_T     NEO_T
#define NEO_2_D     NEO_D
#define NEO_2_Y     NEO_Y

// Layer 2 - Row 4
// ================================================================================
#define NEO_2_UE    NEO_CAPITAL_U_DIARESIS
#define NEO_2_OE    NEO_CAPITAL_O_DIARESIS
#define NEO_2_AE    NEO_CAPITAL_A_DIARESIS
#define NEO_2_P     NEO_P
#define NEO_2_Z     NEO_Z
#define NEO_2_B     NEO_B
#define NEO_2_M     NEO_M
#define NEO_2_COMM  NEO_ENDASH
#define NEO_2_DOT   NEO_BULLET
#define NEO_2_J     NEO_J

// Layer 2 - Row 5
// ================================================================================
#define NEO_2_SPC   NEO_SPACE

// Layer 3 - Row 1
// ================================================================================
#define NEO_3_1     NEO_SUP1
#define NEO_3_2     NEO_SUP2
#define NEO_3_3     NEO_SUP3
#define NEO_3_4     NEO_SRAQM
#define NEO_3_5     NEO_SLAQM
#define NEO_3_6     NEO_CENT
#define NEO_3_7     NEO_YEN
#define NEO_3_8     NEO_SL9QM
#define NEO_3_9     NEO_LSQM
#define NEO_3_0     NEO_RSQM
#define NEO_3_MINS  KC_NO

// Layer 3 - Row 2
// ================================================================================
#define NEO_3_X     NEO_ELLIPSIS
#define NEO_3_V     NEO_UNDERSCORE
#define NEO_3_L     NEO_LBRACKET
#define NEO_3_C     NEO_RBRACKET
#define NEO_3_W     NEO_CIRCUMFLEX
#define NEO_3_K     NEO_EXCLAMATION
#define NEO_3_H     NEO_LESSTHAN
#define NEO_3_G     NEO_GREATERTHAN
#define NEO_3_F     NEO_EQUAL
#define NEO_3_Q     NEO_AMPERSAND
#define NEO_3_SS    NEO_SMALL_LONG_S

// Layer 3 - Row 3
// ================================================================================
#define NEO_3_U     NEO_BSLASH
#define NEO_3_I     NEO_SLASH
#define NEO_3_A     NEO_CLBRACKET
#define NEO_3_E     NEO_CRBRACKET
#define NEO_3_O     NEO_ASTERISK
#define NEO_3_S     NEO_QUESTIONMARK
#define NEO_3_N     NEO_LPARENTHESES
#define NEO_3_R     NEO_RPARENTHESES
#define NEO_3_T     NEO_HYPHEN_MINUS
#define NEO_3_D     NEO_COLON
#define NEO_3_Y     NEO_AT

// Layer 3 - Row 4
// ================================================================================
#define NEO_3_UE    NEO_HASH
#define NEO_3_OE    NEO_DOLLAR
#define NEO_3_AE    NEO_PIPE
#define NEO_3_P     NEO_TILDE
#define NEO_3_Z     NEO_GRAVE
#define NEO_3_B     NEO_PLUS
#define NEO_3_M     NEO_PERCENT
#define NEO_3_COMM  NEO_QUOTATION_MARK
#define NEO_3_DOT   NEO_APOSTROPHE
#define NEO_3_J     NEO_SEMICOLON

// Layer 3 - Row 5
// ================================================================================
#define NEO_3_SPC   NEO_SPACE

// Layer 4 - Row 1
// ================================================================================
#define NEO_4_1     NEO_FEMININE_ORDINAL
#define NEO_4_2     NEO_MASCULINE_ORDINAL
#define NEO_4_3     NEO_NUMERO_SIGN
#define NEO_4_4     KC_NO
#define NEO_4_5     NEO_MIDDLE_DOT
#define NEO_4_6     NEO_BRITISH_POUND
#define NEO_4_7     NEO_CURRENCY_SIGN
#define NEO_4_8     NEO_TAB
#define NEO_4_9     NEO_KP_SLASH
#define NEO_4_0     NEO_KP_ASTERISK
#define NEO_4_MINS  NEO_KP_MINUS

// Layer 4 - Row 2
// ================================================================================
#define NEO_4_X     NEO_PAGE_UP
#define NEO_4_V     NEO_BACKSPACE
#define NEO_4_L     NEO_UP
#define NEO_4_C     NEO_DELETE
#define NEO_4_W     NEO_PAGE_DOWN
#define NEO_4_K     NEO_INV_EXCLAMATION
#define NEO_4_H     NEO_KP_7
#define NEO_4_G     NEO_KP_8
#define NEO_4_F     NEO_KP_9
#define NEO_4_Q     NEO_KP_PLUS
#define NEO_4_SS    NEO_MINUS

// Layer 4 - Row 3
// ================================================================================
#define NEO_4_U     NEO_HOME
#define NEO_4_I     NEO_LEFT
#define NEO_4_A     NEO_DOWN
#define NEO_4_E     NEO_RIGHT
#define NEO_4_O     NEO_END
#define NEO_4_S     NEO_INV_QUESTIONMARK
#define NEO_4_N     NEO_KP_4
#define NEO_4_R     NEO_KP_5
#define NEO_4_T     NEO_KP_6
#define NEO_4_D     NEO_KP_COMMA
#define NEO_4_Y     NEO_KP_DOT

// Layer 4 - Row 4
// ================================================================================
#define NEO_4_UE    NEO_ESCAPE
#define NEO_4_OE    NEO_TAB
#define NEO_4_AE    NEO_INSERT
#define NEO_4_P     NEO_KP_ENTER
#define NEO_4_Z     NEO_UNDO
#define NEO_4_B     NEO_COLON
#define NEO_4_M     NEO_KP_1
#define NEO_4_COMM  NEO_KP_2
#define NEO_4_DOT   NEO_KP_3
#define NEO_4_J     NEO_SEMICOLON

// Layer 4 - Row 5
// ================================================================================
#define NEO_4_SPC   NEO_KP_0

// Layer 5 - Row 1
// ================================================================================
#define NEO_5_1     NEO_SUB_1
#define NEO_5_2     NEO_SUB_2
#define NEO_5_3     NEO_SUB_3
#define NEO_5_4     NEO_FEMALE_SIGN
#define NEO_5_5     NEO_MALE_SIGN
#define NEO_5_6     NEO_MALE_FEMALE_SIGN
#define NEO_5_7     NEO_GREEK_KAPPA
#define NEO_5_8     NEO_MATH_LA_BRACKET
#define NEO_5_9     NEO_MATH_RA_BRACKET
#define NEO_5_0     NEO_SUB_ZERO
#define NEO_5_MINS  NEO_NON_BREAKING_HYPHEN

// Layer 5 - Row 2
// ================================================================================
#define NEO_5_X     NEO_GREEK_SMALL_XI
#define NEO_5_V     KC_NO
#define NEO_5_L     NEO_GREEK_SMALL_LAMBDA
#define NEO_5_C     NEO_GREEK_SMALL_CHI
#define NEO_5_W     NEO_GREEK_SMALL_OMEGA
#define NEO_5_K     NEO_GREEK_SMALL_KAPPA
#define NEO_5_H     NEO_GREEK_SMALL_PSI
#define NEO_5_G     NEO_GREEK_SMALL_GAMMA
#define NEO_5_F     NEO_GREEK_SMALL_PHI
#define NEO_5_Q     NEO_GREEK_PHI
#define NEO_5_SS    NEO_GREEK_SMALL_SIGMA

// Layer 5 - Row 3
// ================================================================================
#define NEO_5_U     NEO_GREEK_SMALL_IOTA
#define NEO_5_I     NEO_GREEK_SMALL_ALPHA
#define NEO_5_A     NEO_GREEK_SMALL_EPSILON
#define NEO_5_E     NEO_GREEK_SMALL_EPSILON
#define NEO_5_O     NEO_GREEK_SMALL_OMICRON
#define NEO_5_S     NEO_GREEK_SMALL_SIGMA
#define NEO_5_N     NEO_GREEK_SMALL_NU
#define NEO_5_R     NEO_GREEK_SMALL_RHO
#define NEO_5_T     NEO_GREEK_SMALL_TAU
#define NEO_5_D     NEO_GREEK_SMALL_DELTA
#define NEO_5_Y     NEO_GREEK_SMALL_UPSILON

// Layer 5 - Row 4
// ================================================================================
#define NEO_5_UE    KC_NO
#define NEO_5_OE    NEO_GREEK_LUNATE_EPSILON
#define NEO_5_AE    NEO_GREEK_SMALL_ETA
#define NEO_5_P     NEO_GREEK_SMALL_PI
#define NEO_5_Z     NEO_GREEK_SMALL_ZETA
#define NEO_5_B     NEO_GREEK_SMALL_BETA
#define NEO_5_M     NEO_GREEK_SMALL_MU
#define NEO_5_COMM  NEO_GREEK_RHO
#define NEO_5_DOT   NEO_GREEK_THETA
#define NEO_5_J     NEO_GREEK_SMALL_THETA

// Layer 5 - Row 5
// ================================================================================
#define NEO_5_SPC   NEO_NO_BREAK_SPACE

// Layer 6 - Row 1
// ================================================================================
#define NEO_6_1     NEO_NOT_SIGN
#define NEO_6_2     NEO_LOGICAL_OR
#define NEO_6_3     NEO_LOGICAL_AND
#define NEO_6_4     NEO_UP_TACK
#define NEO_6_5     NEO_MEASURED_ANGLE
#define NEO_6_6     NEO_PARALLEL_TO
#define NEO_6_7     NEO_RIGHTWARDS_ARROW
#define NEO_6_8     NEO_INFINITY
#define NEO_6_9     NEO_PROPORTIONAL_TO
#define NEO_6_0     NEO_EMPTY_SET
#define NEO_6_MINS  NEO_DOUBLE_DASH_HORIZONTAL

// Layer 6 - Row 2
// ================================================================================
#define NEO_6_X     NEO_GREEK_XI
#define NEO_6_V     NEO_SQUARE_ROOT
#define NEO_6_L     NEO_GREEK_LAMBDA
#define NEO_6_C     NEO_DS_CAPITAL_C
#define NEO_6_W     NEO_GREEK_OMEGA
#define NEO_6_K     NEO_MULTIPLICATION_SIGN
#define NEO_6_H     NEO_GREEK_PSI
#define NEO_6_G     NEO_GREEK_GAMMA
#define NEO_6_F     NEO_GREEK_PHI
#define NEO_6_Q     NEO_DS_CAPITAL_Q
#define NEO_6_SS    NEO_RING_OPERATOR

// Layer 6 - Row 3
// ================================================================================
#define NEO_6_U     NEO_SUBSET_OF
#define NEO_6_I     NEO_INTEGRAL
#define NEO_6_A     NEO_FOR_ALL
#define NEO_6_E     NEO_THERE_EXISTS
#define NEO_6_O     NEO_ELEMENT_OF
#define NEO_6_S     NEO_GREEK_SIGMA
#define NEO_6_N     NEO_DS_CAPITAL_N
#define NEO_6_R     NEO_DS_CAPITAL_R
#define NEO_6_T     NEO_PARTIAL_DIFFERENTIAL
#define NEO_6_D     NEO_GREEK_DELTA
#define NEO_6_Y     NEO_NABLA

// Layer 6 - Row 4
// ================================================================================
#define NEO_6_UE    NEO_UNION
#define NEO_6_OE    NEO_INTERSECTION
#define NEO_6_AE    NEO_ALEF_SYMBOL
#define NEO_6_P     NEO_GREEK_PI
#define NEO_6_Z     NEO_DS_CAPITAL_Z
#define NEO_6_B     NEO_LEFTWARDS_DOUBLE_ARROW
#define NEO_6_M     NEO_LEFT_RIGHT_DOUBLE_ARROW
#define NEO_6_COMM  NEO_RIGHTWARDS_DOUBLE_ARROW
#define NEO_6_DOT   NEO_RIGHTWARDS_ARROW_BAR
#define NEO_6_J     NEO_GREEK_THETA

// Layer 6 - Row 5
// ================================================================================
#define NEO_6_SPC   NEO_BROKEN_BAR
// clang-format on

bool process_record_keymap(uint16_t keycode, keyrecord_t *record);
void post_process_record_keymap(uint16_t keycode, keyrecord_t *record);
