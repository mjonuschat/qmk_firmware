// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef MANUFACTURER
#    undef MANUFACTURER
#endif
#define MANUFACTURER Ergohaven

#define USE_SERIAL
#define MASTER_LEFT
#define ONESHOT_TAP_TOGGLE 3

/* Encoder support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 2
#define ENCODER_DIRECTION_FLIP

// Underglow
#ifdef RGB_DI_PIN
#    undef RGB_DI_PIN
#endif
#define RGB_DI_PIN D1

#ifdef RGBLED_NUM
#    undef RGBLED_NUM
#endif
#define RGBLED_NUM 18

#define RGBLED_SPLIT { 9, 9 }
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 150
