// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
	  * Layer 0
	  * =========================================
      *           ┌─────┐       ┌─────┐
      *           │ Esc │       │TG(1)│
	  *           └─────┘		└─────┘
      * ┌───┬───┬───┬───┐       ┌───┬───┬───┬───┐
      * │ A │ S │ D │ F │       │ K │ L │ ; │ ' │
      * └───┴───┴───┴───┘       └───┴───┴───┴───┘
      *         ┌───────┐       ┌────────┐
      *         │ Space │       │ Space  │
      *         └───────┘       └────────┘
	  *
	  * Layer 1
	  * =========================================
      *           ┌─────┐       ┌─────┐
      *           │Reset│       │  ▽  │
	  *           └─────┘		└─────┘
      * ┌───┬───┬───┬───┐       ┌───┬───┬───┬───┐
      * │N/A│  │  │N/A│       │ ← │ ↓ │ ↑ │ → │
      * └───┴───┴───┴───┘       └───┴───┴───┴───┘
      *         ┌───────┐       ┌────────┐
      *         │   ▽   │       │   ▽    │
      *         └───────┘       └────────┘
      */
    [0] = LAYOUT_8k_default(
//        						KC_ESC,		TG(1),
//        KC_A,	KC_S,	KC_D,	KC_F,		KC_K,    KC_L,    KC_SCLN,	KC_QUOT,
//                              KC_SPC,		KC_TAB
								KC_ESC,
		KC_A,	KC_S,	KC_D,	KC_F,
								KC_SPC,
								TG(1),
		KC_QUOT,KC_SCLN,KC_L,	KC_K,
								KC_TAB
    ),
    [1] = LAYOUT_8k_default(
//        						QK_BOOT,	KC_TRNS,
//        KC_NO,	KC_VOLD,KC_VOLU,KC_NO,		KC_LEFT,    KC_DOWN,    KC_UP,	KC_RGHT,
//                                KC_TRNS,	KC_TRNS
								QK_BOOT,
		KC_NO,	KC_VOLD,KC_VOLU,KC_NO,
								KC_TRNS,
								KC_TRNS,
		KC_RGHT,KC_UP,	KC_DOWN,KC_LEFT,
								KC_TRNS
    )
};
