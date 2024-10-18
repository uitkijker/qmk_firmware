/* Copyright 2015-2021 Jack Humbert
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

#include QMK_KEYBOARD_H

// Define layer names for clarity
enum planck_layers {
  _DVORAK,
  _QWERTY,
  _NO,
  _FN
};

/* A tip about Dvorak when I'm comfortable: switch U and I, and L and M */

// GENERAL
#define TAB_GUI LGUI_T(KC_TAB)
#define SPC_FN  LT(_FN,KC_SPC)
#define ESC_ALT LALT_T(KC_ESC)
#define ENT_ALT LALT_T(KC_ENT)
#define BSP_NO  LT(_NO,KC_BSPC)
#define DEL_GUI LGUI_T(KC_DEL)
#define MSSCTRL RCTL(KC_UP)
#define SPTLGHT LGUI(KC_SPC)
#define QWERTY  DF(_QWERTY)
#define CTLCLCK LCTL(KC_BTN1)
#define DVORAK  DF(_DVORAK)

// CONTROL
#define QUO_LCT LCTL_T(KC_QUOT)
#define Q_LCTL  LCTL_T(KC_Q)
#define BRD_LCT LCTL_T(KC_BRID)
#define ONE_LCT LCTL_T(KC_1)
#define L_RCTL  RCTL_T(KC_L)
#define P_RCTL  RCTL_T(KC_P)
#define VLU_RCT RCTL_T(KC_VOLU)
#define ZER_RCT RCTL_T(KC_0)

// SHIFT
#define SCL_LSF LSFT_T(KC_SCLN)
#define Z_LSFT  LSFT_T(KC_Z)
#define FON_LSF LSFT_T(KC_F1)
#define GRV_LSF LSFT_T(KC_GRV)
#define Z_RSFT  RSFT_T(KC_Z)
#define SLS_RSF RSFT_T(KC_SLSH)
#define FGT_RSF RSFT_T(KC_F8)
#define BSL_RSF RSFT_T(KC_BSLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT_planck_grid(
QUO_LCT  , KC_COMM  , KC_DOT   , KC_P     , KC_Y     , XXXXXXX  , XXXXXXX  , KC_F     , KC_G     , KC_C     , KC_R     , L_RCTL   ,
KC_A     , KC_O     , KC_E     , KC_U     , KC_I     , XXXXXXX  , XXXXXXX  , KC_D     , KC_H     , KC_T     , KC_N     , KC_S     ,
SCL_LSF  , KC_Q     , KC_J     , KC_K     , KC_X     , XXXXXXX  , XXXXXXX  , KC_B     , KC_M     , KC_W     , KC_V     , Z_RSFT   ,
XXXXXXX  , XXXXXXX  , TAB_GUI  , SPC_FN   , ESC_ALT  , XXXXXXX  , XXXXXXX  , ENT_ALT  , BSP_NO   , DEL_GUI  , XXXXXXX  , XXXXXXX
  ),

  [_QWERTY] = LAYOUT_planck_grid(
Q_LCTL   , KC_W     , KC_E     , KC_R     , KC_T     , XXXXXXX  , XXXXXXX  , KC_Y     , KC_U     , KC_I     , KC_O     , P_RCTL   ,
KC_A     , KC_S     , KC_D     , KC_F     , KC_G     , XXXXXXX  , XXXXXXX  , KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  ,
Z_LSFT   , KC_X     , KC_C     , KC_V     , KC_B     , XXXXXXX  , XXXXXXX  , KC_N     , KC_M     , KC_COMM  , KC_DOT   , SLS_RSF  ,
XXXXXXX  , XXXXXXX  , TAB_GUI  , SPC_FN   , ESC_ALT  , XXXXXXX  , XXXXXXX  , ENT_ALT  , BSP_NO   , DEL_GUI  , XXXXXXX  , XXXXXXX
  ),

  [_FN] = LAYOUT_planck_grid(
BRD_LCT  , KC_BRIU  , MSSCTRL  , SPTLGHT  , KC_EJCT  , XXXXXXX  , XXXXXXX  , KC_MRWD  , KC_MPLY  , KC_MFFD  , KC_VOLD  , VLU_RCT  ,
KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , KC_F20   , XXXXXXX  , XXXXXXX  , QWERTY   , KC_F9    , KC_F10   , KC_F11   , KC_F12   ,
FON_LSF  , KC_F2    , KC_F3    , KC_F4    , CTLCLCK  , XXXXXXX  , XXXXXXX  , DVORAK   , KC_F5    , KC_F6    , KC_F7    , FGT_RSF  ,
XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX
  ),

  [_NO] = LAYOUT_planck_grid(
ONE_LCT  , KC_2     , KC_3     , KC_4     , KC_5     , XXXXXXX  , XXXXXXX  , KC_6     , KC_7     , KC_8     , KC_9     , ZER_RCT  ,
XXXXXXX  , DT_DOWN  , DT_UP    , DT_PRNT  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_MINS  , KC_EQL   , KC_LBRC  , KC_RBRC  ,
GRV_LSF  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_QUOT  , KC_SLSH  , BSL_RSF  ,
XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX
  ),

};
