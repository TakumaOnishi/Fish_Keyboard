#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_2(
  CTL_T(KC_TAB), KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    ALT_T(KC_BSPC),
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L,    KC_P,
        KC_Z,    KC_X,    KC_C,    KC_V,    XXXXXXX,              XXXXXXX, KC_B,    KC_M,    KC_N,    KC_Q,
                             SFT_T(KC_SPC), GUI_T(KC_ENT),   LT(2,KC_DOT), LT(1,KC_COMM)
    ),

    [1] = LAYOUT_split_3x5_2(
        KC_COLN, KC_SLSH, KC_ASTR, KC_PERC, KC_CIRC,              KC_ESC,  KC_CAPS, KC_LANG2,KC_LANG1,KC_5,
        KC_SCLN, KC_MINS, KC_PLUS, KC_EQL,  KC_UNDS,              KC_0,    KC_1,    KC_2,    KC_3,    KC_4,
        KC_QUES, KC_EXLM, KC_AMPR, KC_PIPE, XXXXXXX,              XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,
                          SFT_T(S(KC_SPC)), GUI_T(S(KC_ENT)),LT(3,KC_DOT), XXXXXXX
    ),

    [2] = LAYOUT_split_3x5_2(
        KC_AT,   KC_LBRC, KC_DQUO, KC_RBRC, KC_DLR,               KC_VOLU, XXXXXXX, KC_UP,   XXXXXXX, S(G(KC_5)),
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
