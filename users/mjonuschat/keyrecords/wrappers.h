// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2020 @jola5
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "mjonuschat.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts

NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/
// clang-format off
#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______


#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

// NEO Layer 1
#define ___________________NEO1_L1_________________       NEO_1_1,    NEO_1_2,    NEO_1_3,    NEO_1_4,    NEO_1_5
#define ___________________NEO1_L2_________________       NEO_1_X,    NEO_1_V,    NEO_1_L,    NEO_1_C,    NEO_1_W
#define ___________________NEO1_L3_________________       NEO_1_U,    NEO_1_I,    NEO_1_A,    NEO_1_E,    NEO_1_O
#define ___________________NEO1_L4_________________       NEO_1_UE,   NEO_1_OE,   NEO_1_AE,   NEO_1_P,    NEO_1_Z

#define ___________________NEO1_R1_________________       NEO_1_6,    NEO_1_7,    NEO_1_8,    NEO_1_9,    NEO_1_0
#define ___________________NEO1_R2_________________       NEO_1_K,    NEO_1_H,    NEO_1_G,    NEO_1_F,    NEO_1_Q
#define ___________________NEO1_R3_________________       NEO_1_S,    NEO_1_N,    NEO_1_R,    NEO_1_T,    NEO_1_D
#define ___________________NEO1_R4_________________       NEO_1_B,    NEO_1_M,    NEO_1_COMM, NEO_1_DOT,  NEO_1_J

// NEO Layer 2
#define ___________________NEO2_L1_________________       NEO_2_1,    NEO_2_2,    NEO_2_3,    NEO_2_4,    NEO_2_5
#define ___________________NEO2_L2_________________       NEO_2_X,    NEO_2_V,    NEO_2_L,    NEO_2_C,    NEO_2_W
#define ___________________NEO2_L3_________________       NEO_2_U,    NEO_2_I,    NEO_2_A,    NEO_2_E,    NEO_2_O
#define ___________________NEO2_L4_________________       NEO_2_UE,   NEO_2_OE,   NEO_2_AE,   NEO_2_P,    NEO_2_Z

#define ___________________NEO2_R1_________________       NEO_2_6,    NEO_2_7,    NEO_2_8,    NEO_2_9,    NEO_2_0
#define ___________________NEO2_R2_________________       NEO_2_K,    NEO_2_H,    NEO_2_G,    NEO_2_F,    NEO_2_Q
#define ___________________NEO2_R3_________________       NEO_2_S,    NEO_2_N,    NEO_2_R,    NEO_2_T,    NEO_2_D
#define ___________________NEO2_R4_________________       NEO_2_B,    NEO_2_M,    NEO_2_COMM, NEO_2_DOT,  NEO_2_J

// NEO Layer 3
#define ___________________NEO3_L1_________________       NEO_3_1,    NEO_3_2,    NEO_3_3,    NEO_3_4,    NEO_3_5
#define ___________________NEO3_L2_________________       NEO_3_X,    NEO_3_V,    NEO_3_L,    NEO_3_C,    NEO_3_W
#define ___________________NEO3_L3_________________       NEO_3_U,    NEO_3_I,    NEO_3_A,    NEO_3_E,    NEO_3_O
#define ___________________NEO3_L4_________________       NEO_3_UE,   NEO_3_OE,   NEO_3_AE,   NEO_3_P,    NEO_3_Z

#define ___________________NEO3_R1_________________       NEO_3_6,    NEO_3_7,    NEO_3_8,    NEO_3_9,    NEO_3_0
#define ___________________NEO3_R2_________________       NEO_3_K,    NEO_3_H,    NEO_3_G,    NEO_3_F,    NEO_3_Q
#define ___________________NEO3_R3_________________       NEO_3_S,    NEO_3_N,    NEO_3_R,    NEO_3_T,    NEO_3_D
#define ___________________NEO3_R4_________________       NEO_3_B,    NEO_3_M,    NEO_3_COMM, NEO_3_DOT,  NEO_3_J

// NEO Layer 4
#define ___________________NEO4_L1_________________       NEO_4_1,    NEO_4_2,    NEO_4_3,    NEO_4_4,    NEO_4_5
#define ___________________NEO4_L2_________________       NEO_4_X,    NEO_4_V,    NEO_4_L,    NEO_4_C,    NEO_4_W
#define ___________________NEO4_L3_________________       NEO_4_U,    NEO_4_I,    NEO_4_A,    NEO_4_E,    NEO_4_O
#define ___________________NEO4_L4_________________       NEO_4_UE,   NEO_4_OE,   NEO_4_AE,   NEO_4_P,    NEO_4_Z

#define ___________________NEO4_R1_________________       NEO_4_6,    NEO_4_7,    NEO_4_8,    NEO_4_9,    NEO_4_0
#define ___________________NEO4_R2_________________       NEO_4_K,    NEO_4_H,    NEO_4_G,    NEO_4_F,    NEO_4_Q
#define ___________________NEO4_R3_________________       NEO_4_S,    NEO_4_N,    NEO_4_R,    NEO_4_T,    NEO_4_D
#define ___________________NEO4_R4_________________       NEO_4_B,    NEO_4_M,    NEO_4_COMM, NEO_4_DOT,  NEO_4_J

// NEO Layer 5
#define ___________________NEO5_L1_________________       NEO_5_1,    NEO_5_2,    NEO_5_3,    NEO_5_4,    NEO_5_5
#define ___________________NEO5_L2_________________       NEO_5_X,    NEO_5_V,    NEO_5_L,    NEO_5_C,    NEO_5_W
#define ___________________NEO5_L3_________________       NEO_5_U,    NEO_5_I,    NEO_5_A,    NEO_5_E,    NEO_5_O
#define ___________________NEO5_L4_________________       NEO_5_UE,   NEO_5_OE,   NEO_5_AE,   NEO_5_P,    NEO_5_Z

#define ___________________NEO5_R1_________________       NEO_5_6,    NEO_5_7,    NEO_5_8,    NEO_5_9,    NEO_5_0
#define ___________________NEO5_R2_________________       NEO_5_K,    NEO_5_H,    NEO_5_G,    NEO_5_F,    NEO_5_Q
#define ___________________NEO5_R3_________________       NEO_5_S,    NEO_5_N,    NEO_5_R,    NEO_5_T,    NEO_5_D
#define ___________________NEO5_R4_________________       NEO_5_B,    NEO_5_M,    NEO_5_COMM, NEO_5_DOT,  NEO_5_J

// NEO Layer 6
#define ___________________NEO6_L1_________________       NEO_6_1,    NEO_6_2,    NEO_6_3,    NEO_6_4,    NEO_6_5
#define ___________________NEO6_L2_________________       NEO_6_X,    NEO_6_V,    NEO_6_L,    NEO_6_C,    NEO_6_W
#define ___________________NEO6_L3_________________       NEO_6_U,    NEO_6_I,    NEO_6_A,    NEO_6_E,    NEO_6_O
#define ___________________NEO6_L4_________________       NEO_6_UE,   NEO_6_OE,   NEO_6_AE,   NEO_6_P,    NEO_6_Z

#define ___________________NEO6_R1_________________       NEO_6_6,    NEO_6_7,    NEO_6_8,    NEO_6_9,    NEO_6_0
#define ___________________NEO6_R2_________________       NEO_6_K,    NEO_6_H,    NEO_6_G,    NEO_6_F,    NEO_6_Q
#define ___________________NEO6_R3_________________       NEO_6_S,    NEO_6_N,    NEO_6_R,    NEO_6_T,    NEO_6_D
#define ___________________NEO6_R4_________________       NEO_6_B,    NEO_6_M,    NEO_6_COMM, NEO_6_DOT,  NEO_6_J

// clang-format on
