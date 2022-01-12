// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef SPLIT_KEYBOARD
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#endif

#ifdef HOST_OS_MACOS
#    ifdef TAP_HOLD_CAPS_DELAY
#        undef TAP_HOLD_CAPS_DELAY
#    endif
#    define TAP_HOLD_CAPS_DELAY 120
#endif

#endif

#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 150

#ifdef TAPPING_TOGGLE
#    undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 2

#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 300

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif

#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

#ifdef HOST_OS_WINDOWS
#    ifdef UNICODE_KEY_WINC
#        undef UNICODE_KEY_WINC
#    endif
#    ifdef UNICODE_SELECTED_MODES
#        undef UNICODE_SELECTED_MODES
#    endif
#    define UNICODE_SELECTED_MODES UC_WINC
#    define UNICODE_KEY_WINC KC_F13
#endif