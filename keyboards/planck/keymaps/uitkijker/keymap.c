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

#define Z_LSFT  LSFT_T(KC_Z)
#define SLS_RSF RSFT_T(KC_SLSH)
#define TAB_GUI LGUI_T(KC_TAB)
#define SPC_FN  LT(_FN,KC_SPC)
#define ESC_ALT LALT_T(KC_ESC)
#define ENT_CTL LCTL_T(KC_ENT)
#define BSP_NO  LT(_NO,KC_BSPC)
#define DEL_GUI LGUI_T(KC_DEL)
#define SCL_LSF LSFT_T(KC_SCLN)
#define Z_RSFT  RSFT_T(KC_Z)
#define MSSCTRL RCTL(KC_UP)
#define LNCHPAD HYPR(KC_F4)
#define MENUBAR LCTL(KC_F2)
#define DOCK    LCTL(KC_F3)
#define CTLCNTR LCTL(KC_F8)
#define NOTCNTR LCTL(KC_F11)
#define SPTLGHT LGUI(KC_SPC)
#define DVORAK  DF(_DVORAK)
#define F1_LSFT LSFT_T(KC_F1)
#define CTLCLCK LCTL(KC_BTN1)
#define QWERTY  DF(_QWERTY)
#define F8_RSFT RSFT_T(KC_F8)
#define RBR_RSF RSFT_T(KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_planck_grid(
KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     , XXXXXXX  , XXXXXXX  , KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     ,
KC_A     , KC_S     , KC_D     , KC_F     , KC_G     , XXXXXXX  , XXXXXXX  , KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  ,
Z_LSFT   , KC_X     , KC_C     , KC_V     , KC_B     , XXXXXXX  , XXXXXXX  , KC_N     , KC_M     , KC_COMM  , KC_DOT   , SLS_RSF  ,
XXXXXXX  , XXXXXXX  , TAB_GUI  , SPC_FN   , ESC_ALT  , XXXXXXX  , XXXXXXX  , ENT_CTL  , BSP_NO   , DEL_GUI  , XXXXXXX  , XXXXXXX
  ),

  [_DVORAK] = LAYOUT_planck_grid(
KC_QUOT  , KC_COMM  , KC_DOT   , KC_P     , KC_Y     , XXXXXXX  , XXXXXXX  , KC_F     , KC_G     , KC_C     , KC_R     , KC_M     ,
KC_A     , KC_O     , KC_E     , KC_I     , KC_U     , XXXXXXX  , XXXXXXX  , KC_D     , KC_H     , KC_T     , KC_N     , KC_S     ,
SCL_LSF  , KC_Q     , KC_J     , KC_K     , KC_X     , XXXXXXX  , XXXXXXX  , KC_B     , KC_L     , KC_W     , KC_V     , Z_RSFT   ,
XXXXXXX  , XXXXXXX  , TAB_GUI  , SPC_FN   , ESC_ALT  , XXXXXXX  , XXXXXXX  , ENT_CTL  , BSP_NO   , DEL_GUI  , XXXXXXX  , XXXXXXX
  ),

  [_FN] = LAYOUT_planck_grid(
KC_BRID  , KC_BRIU  , MSSCTRL  , LNCHPAD  , KC_EJCT  , XXXXXXX  , XXXXXXX  , KC_MRWD  , KC_MPLY  , KC_MFFD  , KC_VOLD  , KC_VOLU  ,
MENUBAR  , DOCK     , CTLCNTR  , NOTCNTR  , SPTLGHT  , XXXXXXX  , XXXXXXX  , DVORAK   , KC_F9    , KC_F10   , KC_F11   , KC_F12   ,
F1_LSFT  , KC_F2    , KC_F3    , KC_F4    , CTLCLCK  , XXXXXXX  , XXXXXXX  , QWERTY   , KC_F5    , KC_F6    , KC_F7    , F8_RSFT  ,
XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX
  ),

  [_NO] = LAYOUT_planck_grid(
KC_1     , KC_2     , KC_3     , KC_4     , KC_5     , XXXXXXX  , XXXXXXX  , KC_6     , KC_7     , KC_8     , KC_9     , KC_0     ,
KC_GRV   , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_SLSH  , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  ,
SCL_LSF  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_BSLS  , KC_MINS  , KC_EQL   , KC_LBRC  , RBR_RSF  ,
XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX  , _______  , _______  , _______  , XXXXXXX  , XXXXXXX
  ),

};
