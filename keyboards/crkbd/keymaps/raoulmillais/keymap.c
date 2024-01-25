#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _SYM,
  _NUM,
  _FUNCTION,
};

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

// One shot mods
#define OS_LSFT  OSM(MOD_LSFT)
#define OS_RCTL  OSM(MOD_RCTL)
#define OS_LALT  OSM(MOD_LALT)
#define OS_RGUI  OSM(MOD_RGUI)
// One shot layers
#define OS_SYM   OSL(SYM)
#define OS_NUM   OSL(NUM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  <<  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RCtrl |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          | LAlt | SYM  | /Space  /       \Enter \  | SYM  | RGUI |
 *                          |      |      |/       /         \      \ |      |      |
 *                          ----------------------'           '------''--------------
 */
    [_QWERTY] = LAYOUT_split_3x6_3(
      KC_TAB,  KC_Q,   KC_W,   KC_E,     KC_R,   KC_T,              KC_Y,   KC_U,  KC_I,     KC_O,    KC_P,     KC_BSPC,
      KC_ESC,  KC_A,   KC_S,   KC_D,     KC_F,   KC_G,              KC_H,   KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
      OS_LSFT, KC_Z,   KC_X,   KC_C,     KC_V,   KC_B,              KC_N,   KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  OS_RCTL,
                               OS_LALT,  OS_SYM, KC_SPC,            KC_ENT, OS_NUM,OS_RGUI),

/* SYM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   !  |   @  |   {  |   }  |   £  |                    |   &  |   <  |   >  |   =  |   *  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   #  |   $  |   (  |   )  |   `  |                    |   |  |   \  |   /  |   +  |   -  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   %  |   ^  |   [  |   ]  |   ~  |-------|    |-------|   `  |   "  |   '  |   _  |   ~  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |      |      | /Space  /       \Enter \  |      |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          ----------------------'           '------''--------------
 */
    [_SYM] = LAYOUT_split_3x6_3(
     _______, KC_EXLM,KC_AT,  KC_LCBR,  KC_RCBR, UC(0xA3),         KC_AMPR, KC_LT,   KC_GT,    KC_EQL,  KC_ASTR, KC_DEL,
     _______, KC_HASH,KC_DLR, KC_LPRN,  KC_RPRN, KC_GRV,           KC_PIPE, KC_BSLS, KC_SLSH,  KC_PLUS, KC_MINS, _______,
     _______, KC_PERC,KC_CIRC,KC_LBRC,  KC_RBRC, KC_TILD,          KC_GRV,  KC_DQUO, KC_QUOT,  KC_UNDS, KC_TILD, _______,
                              _______,  _______, _______,          _______, _______,  _______),

/* NUM
 * ,-----------------------------------------.                    ,------------------------------------------.
 * |      |   -  |   7  |   8  |   9  |   *  |                    | Home | PgDn | PgUp | End  |       |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+-------+------|
 * |      |   ^  |   4  |   5  |   6  |   +  |                    | Left | Down |  Up  |Right |       |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+-------+------|
 * |      |   0  |   1  |   2  |   3  |   #  |-------|    |-------|PrScr | Ins  | Ins  | Del  |       |      |
 * `-----------------------------------------/       /     \      \------------------------------------------'
 *                          |      |  0   | /Enter  /       \Space \  |      |      |
 *                          |      |      |/       /         \      \ |      |      |
 *                          ----------------------'           '------''--------------
 */
    [_NUM] = LAYOUT_split_3x6_3(
     _______, KC_MINS, KC_7,   KC_8,    KC_9,    KC_ASTR,          KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,
     _______, KC_CIRC, KC_4,   KC_5,    KC_6,    KC_PLUS,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
     _______, KC_0,    KC_1,   KC_2,    KC_3,    KC_HASH,          KC_PSCR, KC_INS, KC_INS,   KC_DEL,  _______, _______,
                               _______, _______, _______,          _______, _______, _______),

    [_FUNCTION] = LAYOUT_split_3x6_3(
      XXXXXXX, KC_F12, KC_F7,  KC_F8,  KC_F9,  XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F11, KC_F4,  KC_F5,  KC_F6,  XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F10, KC_F1,  KC_F2,  KC_F3,  XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______,                   _______,  _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYM, _NUM, _FUNCTION);
}

// Disables the power LED on a liatris
void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}

