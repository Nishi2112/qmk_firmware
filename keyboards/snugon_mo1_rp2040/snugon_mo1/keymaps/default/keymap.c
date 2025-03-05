/*
Copyright 2023 Shota Nishide

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT(
    KC_WBAK     , KC_WFWD       , KC_BTN3       , KC_BTN1     , KC_NO       , KC_BTN2     ,
    KC_NO       , KC_NO         , KC_NO         , KC_NO       , KC_NO       , KC_NO
  ),

  [1] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [2] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [3] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [4] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [5] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [6] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [7] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [8] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [9] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [10] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [11] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  ),

  [12] = LAYOUT(
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS     ,
    KC_TRNS     , KC_TRNS       , KC_TRNS       , KC_TRNS     , KC_TRNS     , KC_TRNS
  )
};

/*****************************encoder mappig**********************************/
  #if defined(ENCODER_MAP_ENABLE)
  const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
      [0] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [1] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [2] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [3] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [4] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [5] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [6] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [7] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [8] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [9] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [10] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [11] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D) },
      [12] = { ENCODER_CCW_CW(SCRL_THI, SCRL_THD) },
  };
  #endif
