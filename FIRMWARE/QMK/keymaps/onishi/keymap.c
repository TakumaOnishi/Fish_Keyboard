#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_2(
  CTL_T(KC_BSPC),KC_L,    KC_U,    KC_F,    KC_Q,                 KC_K,    KC_W,    KC_R,    KC_Y,    KC_P,
        KC_E,    KC_I,    KC_A,    KC_O,    KC_V,                 KC_G,    KC_T,    KC_N,    KC_S,    KC_H,
  ALT_T(KC_TAB), KC_Z,    KC_X,    KC_C,    XXXXXXX,              XXXXXXX, KC_D,    KC_M,    KC_J,    KC_B,
                             SFT_T(KC_SPC), GUI_T(KC_ENT),   LT(2,KC_DOT), LT(1,KC_COMM)
    ),

    [1] = LAYOUT_split_3x5_2(
        KC_COLN, KC_PERC, KC_ASTR, KC_SLSH, KC_CIRC,              KC_LANG1,KC_4,    KC_5,    KC_6,    KC_ESC,
        KC_SCLN, KC_EQL,  KC_PLUS, KC_MINS, KC_UNDS,              KC_LANG2,KC_1,    KC_2,    KC_3,    KC_0,
        KC_QUES, KC_PIPE, KC_AMPR, KC_EXLM, XXXXXXX,              XXXXXXX, KC_7,    KC_8,    KC_9,    KC_CAPS,
                          SFT_T(S(KC_SPC)), GUI_T(S(KC_ENT)),LT(3,KC_DOT), XXXXXXX
    ),

    [2] = LAYOUT_split_3x5_2(
        KC_AT,   KC_LBRC, KC_DQUO, KC_RBRC, KC_DLR,               KC_VOLU, KC_LANG2, KC_UP, KC_LANG1, S(G(KC_5)),
        KC_HASH, KC_LPRN, KC_QUOT, KC_RPRN, KC_TILD,              KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, S(G(KC_3)),
        KC_BSLS, KC_LCBR, KC_GRV,  KC_RCBR, XXXXXXX,              XXXXXXX, KC_MRWD, KC_MPLY, KC_MFFD, S(G(KC_4)),
                          SFT_T(G(KC_SPC)), GUI_T(G(KC_ENT)),     XXXXXXX, LT(3,KC_COMM)
    ),

    [3] = LAYOUT_split_3x5_2(
   OSM(MOD_LCTL),XXXXXXX, KC_WH_D, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_WH_R, KC_WH_U, KC_WH_L, XXXXXXX,              XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,
   OSM(MOD_LALT),XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   KC_BTN1, KC_BTN2,              XXXXXXX, XXXXXXX
    )
};
