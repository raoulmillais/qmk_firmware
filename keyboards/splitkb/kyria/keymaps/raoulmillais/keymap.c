/* Copyright 2023 Raoul Millais <raoul@raoulmillais.com>
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
#include "layers.h"

// Layer holds
#define QWERTY MO(_QWERTY)
#define SYM    MO(_SYM)
#define NUM    MO(_NUM)

// Homerow modtaps
// Left hand
#define MOD_A  LGUI_T(KC_A)
#define MOD_S  LALT_T(KC_S)
#define MOD_D  LCTL_T(KC_D)
#define MOD_F  LSFT_T(KC_F)
// Right hand
#define MOD_SCLN  RGUI_T(KC_SCLN)
#define MOD_L  RALT_T(KC_L)
#define MOD_K  RCTL_T(KC_K)
#define MOD_J  RSFT_T(KC_J)

// Layer taps
// Left hand
#define C_NUM    LT(_NUM, KC_C)
#define V_SYM    LT(_SYM, KC_V)
// Right hand
#define COMM_NUM LT(_NUM, KC_COMM)
#define M_SYM    LT(_SYM, KC_M)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY alpha keys */
    [_QWERTY] = LAYOUT(
      XXXXXXX, KC_Q,   KC_W,   KC_E,     KC_R,   KC_T,                                        KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,    XXXXXXX,
      XXXXXXX, MOD_A,  MOD_S,  MOD_D,    MOD_F,  KC_G,                                        KC_H,   MOD_J,   MOD_K,    MOD_L,   MOD_SCLN,XXXXXXX,
      XXXXXXX, KC_Z,   KC_X,   C_NUM,    V_SYM,  KC_B,   XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, KC_N,   M_SYM,   COMM_NUM, KC_DOT,  KC_SLSH, XXXXXXX,
               XXXXXXX,XXXXXXX,XXXXXXX,  KC_SPC, KC_ENT,                                      KC_ESC, KC_BSPC, XXXXXXX,  XXXXXXX, XXXXXXX),

    /* Symbols */
    [_SYM] = LAYOUT(
      _______, KC_EXLM,KC_AT,  KC_LCBR,  KC_RCBR,UC(0xA3),                                    KC_AMPR,KC_LT,   KC_GT,    KC_EQL,  KC_ASTR, _______,
      _______, KC_HASH,KC_DLR, KC_LPRN,  KC_RPRN,KC_GRV,                                      KC_PIPE,KC_BSLS, KC_SLSH,  KC_PLUS, KC_MINS, _______,
      _______, KC_PERC,KC_CIRC,KC_LBRC,  KC_RBRC,KC_TILD,  _______,_______, _______, _______, KC_GRV, KC_DQUO, KC_QUOT,  KC_UNDS, KC_TILD, _______,
               _______,_______,_______,  KC_TAB, _______,                                     _______,KC_DEL,  _______,  _______, _______),

    /* Numbers and navigation */
    [_NUM] = LAYOUT(
      _______, KC_MINS, KC_7,   KC_8,     KC_9,   KC_ASTR,                                     KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,
      _______, KC_CIRC, KC_4,   KC_5,     KC_6,   KC_PLUS,                                     KC_LEFT, KC_DOWN,KC_UP,    KC_RGHT, _______, _______,
      _______, KC_PERC, KC_1,   KC_2,     KC_3,   KC_HASH,  _______,_______, _______, _______, KC_PSCR, KC_INS, KC_INS,   KC_DEL,  _______, _______,
               _______, _______,_______,  KC_0,   _______,                                     _______, _______, _______, _______, _______)

};
// clang-format on




