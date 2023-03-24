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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY alpha keys */
    [QWERTY] = LAYOUT(
      KC_TAB,  KC_Q,   KC_W,   KC_E,     KC_R,   KC_T,                                        KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,    KC_BSPC,
      KC_ESC,  KC_A,   KC_S,   KC_D,     KC_F,   KC_G,                                        KC_H,   KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,   KC_X,   KC_C,     KC_V,   KC_B,   KC_LSFT, KC_LALT,  KC_RALT, KC_RSFT, KC_N,   KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_ENT,
               KC_NO, KC_LGUI, MO(LOWER),KC_SPC, KC_ENT,                                      KC_ENT, KC_SPC,  MO(RAISE),KC_RCTL, KC_NO),

    /* Symbols */
    [LOWER] = LAYOUT(
      KC_AMPR, KC_EXLM,KC_AT,  KC_LCBR,  KC_RCBR,UC(0xA3),                                    KC_END, KC_LT,   KC_GT,    KC_EQL,  KC_ASTR, KC_TRNS,
      KC_PIPE, KC_HASH,KC_DLR, KC_LPRN,  KC_RPRN,KC_GRV,                                      KC_DEL, KC_BSLS, KC_SLSH,  KC_PLUS, KC_MINS, KC_QUES,
      KC_GRV,  KC_PERC,KC_CIRC,KC_LBRC,  KC_RBRC,KC_TILD,  KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_DQUO, KC_QUOT,  KC_UNDS, KC_TILD, KC_TRNS,
               KC_TRNS,KC_TRNS,KC_TRNS,  KC_TRNS,KC_TRNS,                                     KC_TRNS,KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS),

    /* Numbers and navigation */
    [RAISE] = LAYOUT(
      KC_TRNS,KC_MINS, KC_7,   KC_8,     KC_9,   KC_ASTR,                                     KC_HOME,KC_PGDN, KC_PGUP,  KC_END,  KC_TRNS, KC_TRNS,
      KC_TRNS,KC_CIRC, KC_4,   KC_5,     KC_6,   KC_PLUS,                                     KC_LEFT, KC_DOWN,KC_UP,    KC_RGHT, KC_TRNS, KC_TRNS,
      KC_TRNS,KC_PERC, KC_1,   KC_2,     KC_3,   KC_HASH,  KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_INS, KC_INS,   KC_DEL,  KC_TRNS, KC_TRNS,
               KC_TRNS,KC_0,   KC_TRNS,  KC_TRNS,KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};
// clang-format on




