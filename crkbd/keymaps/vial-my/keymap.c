/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include <stdio.h>


enum custom_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _FUNC,
};

enum custom_keycodes {
    MACOS_LOCK = SAFE_RANGE,
	MACOS_SS,
	MACOS_SCR_L,
	MACOS_SCR_R,
	MACOS_SCR_SH,
	MACOS_SPOTLIGHT
};

// Thumb keys
#define LALT_TAB  LALT_T(KC_TAB)
#define RALT_ENT  RALT_T(KC_ENT)
#define RCTL_ENT  RCTL_T(KC_ENT)
#define LWR_SPC  LT(_LOWER, KC_SPC)
#define RSE_BSP  LT(_RAISE, KC_BSPC)
#define LGUI_SPC LGUI_T(KC_SPC)
#define LSFT_SPC LSFT_T(KC_SPC)
#define RCTL_BSP RCTL_T(KC_BSPC)

// Home row mods - Layer 0 lewa strona
#define HM_A     LCTL_T(KC_A)
#define HM_S     LSFT_T(KC_S)
#define HM_D     LALT_T(KC_D)
#define HM_F     LGUI_T(KC_F)

// Home row mods - Layer 0 prawa strona
#define HM_J     LGUI_T(KC_J)
#define HM_K     RALT_T(KC_K)
#define HM_L     RSFT_T(KC_L)
#define HM_QUOT  RCTL_T(KC_QUOT)
#define HM_SCLN  RCTL_T(KC_SCLN)

// Home row mods - Layer 1 lewa strona (numpad)
#define HM_LLA   LCTL_T(KC_P6)
#define HM_LLS   LSFT_T(KC_P7)
#define HM_LLD   LALT_T(KC_P8)
#define HM_LLF   LGUI_T(KC_P9)

// Home row mods - Layer 1 prawa strona
#define HM_LRQ  RCTL_T(KC_BSLS)
#define HM_LRL  RSFT_T(KC_SCLN)
#define HM_LRK  RALT_T(KC_RBRC)
#define HM_LRJ  RGUI_T(KC_LBRC)

// Home row mods - Layer 2 lewa strona
#define HM_RL1  KC_RCTL
#define HM_RL2  KC_LSFT
#define HM_RL3  KC_RALT
#define HM_RL4  KC_RGUI


// Shortcuts
#define C_EEPROM  QK_CLEAR_EEPROM


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,------------------------------------------------------.
      KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T  ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LALT_TAB, HM_A   , HM_S   , HM_D   , HM_F   , KC_G  ,                      KC_H   , HM_J   , HM_K   , HM_L   , HM_SCLN, KC_RALT ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B  ,                   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, RCTL_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LGUI , LSFT_SPC, TT(_LOWER), RSE_BSP, KC_RSFT, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),

  [_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,------------------------------------------------------.
      _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,LSFT(KC_GRV), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  KC_EQUAL, KC_MINS, KC_LBRC, KC_RBRC, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX  , KC_BSLS, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   LT(_FUNC, KC_BSPC), _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,------------------------------------------------------.
      _______, XXXXXXX, XXXXXXX  , XXXXXXX, XXXXXXX , XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, XXXXXXX, XXXXXXX, MACOS_SCR_L, MACOS_SCR_R, MACOS_SCR_SH,         KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, TT(_FUNC),   _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_FUNC] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,------------------------------------------------------.
      KC_CAPS , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   MACOS_LOCK ,XXXXXXX ,MACOS_SS, XXXXXXX, XXXXXXX, C_EEPROM,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F11 , KC_F12 , XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   _______, _______, MACOS_SPOTLIGHT
                                      //`--------------------------'  `--------------------------'
  )
};
