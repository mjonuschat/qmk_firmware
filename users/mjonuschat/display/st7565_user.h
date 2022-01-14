// Copyright 2021 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"
#include "drivers/lcd/st7565.h"

void st7565_render_neo_layer_state(void);
void st7565_render_mod_status(uint8_t modifiers);
void st7565_render_keylock_status(uint8_t led_usb_state);

bool st7565_render_status_left_keymap(void);
bool st7565_render_status_right_keymap(void);

void st7565_render_status_left(void);
void st7565_render_status_right(void);

display_rotation_t st7565_init_keymap(display_rotation_t rotation);

bool process_record_user_st7565(uint16_t keycode, keyrecord_t *record);