// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    ifndef RGB_MATRIX_REST_MODE
#        define RGB_MATRIX_REST_MODE RGB_MATRIX_BREATHING
#    endif
#    ifndef RGB_MATRIX_ACTIVE_MODE
#        define RGB_MATRIX_ACTIVE_MODE RGB_MATRIX_SOLID_COLOR
#    endif
#    ifndef RGB_MATRIX_STARTUP_MODE
#        define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#    endif
#endif

#ifndef TAPPING_TERM
#    define TAPPING_TERM 175
#endif
