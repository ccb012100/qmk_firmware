// copied over from my Oryx config (<https://configure.zsa.io/ergodox-ez/layouts>) so that I can use Combos/Caps Word/Repeat Key
#include QMK_KEYBOARD_H
#include "version.h"

// FIXME: when holding `LT(3, KC_ENTER)`, the third LED (blue) flashes quickly once instead of remaining on

enum layers {
    BASE,  // default layer
    RIGHT, // symbols, Fn Keys (Right hand)
    NAV,   // Arrow keys (Right hand)
    LEFT,  // Symbols, Fn Keys (Left hand)
};
enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox_pretty(
        KC_GRAVE,       KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_MPLY,    /* split */     KC_PSCR,    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
        KC_TAB,         KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_VOLU,    /* split */     QK_AREP,    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,
        MEH_T(KC_ESC),  KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                   /* split */                 KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MEH_T(KC_QUOTE),
        KC_LEFT_SHIFT,  KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_VOLD,    /* split */     QK_REP,     KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT,
        KC_LEFT_CTRL,   KC_F17,     RGB_TOG,    KC_LGUI,    KC_LALT,                            /* split */                                 KC_RALT,        KC_RGUI,        KC_APP,         KC_F18,         KC_RIGHT_CTRL,
    //             ⭦ left hand ⭧              ⭩ left thumb cluster ⭨                            /* split */                                             ⭩ right thumb cluster ⭨            ⭦ right hand ⭧
                                            KC_LEFT,         KC_DOWN,                           /* split */                                     KC_UP,              KC_RIGHT,
                                                             KC_HOME,                           /* split */                                     KC_PAGE_UP,
                      MT(MOD_LCTL,KC_BSPC), LT(RIGHT,KC_TAB),KC_END,                            /* split */                                     KC_PGDN,            LT(LEFT,KC_ENTER), MT(MOD_RCTL, KC_SPACE)
    ),
    // Layer 1
    [LEFT] = LAYOUT_ergodox_pretty(
        KC_TRNS,        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_CALC,    /* split */      KC_TRNS,   KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_TRNS,    KC_TRNS,    /* split */      KC_TRNS,   KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                /* split */                 KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_F13,     KC_TRNS,    /* split */      KC_TRNS,   KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            /* split */                                 KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
    //             ⭦ left hand ⭧              ⭩ left thumb cluster ⭨                            /* split */                                             ⭩ right thumb cluster ⭨            ⭦ right hand ⭧
                                                    RGB_HUD, RGB_HUI,                           /* split */                                     RGB_M_P,            RGB_TOG,
                                                             UG_SATU,                           /* split */                                     TOGGLE_LAYER_COLOR,
                            MT(MOD_LCTL,KC_DELETE), KC_TRNS, UG_SATD,                           /* split */                                     RGB_MODE_FORWARD,   KC_TRNS,            KC_TRNS
    ),
    // Layer 2
    [RIGHT] = LAYOUT_ergodox_pretty(
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_INS,     KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,        KC_F11,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_TRNS,    KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_LBRC,        KC_RBRC,       QK_AREP,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                /* split */                 KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,       QK_REP,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_TRNS,    KC_TILD,        KC_MINUS,       KC_UNDS,        KC_GRAVE,       KC_BSLS,       KC_TRNS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            /* split */                                 KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,       KC_TRNS,
    //             ⭦ left hand ⭧              ⭩ left thumb cluster ⭨                            /* split */                                             ⭩ right thumb cluster ⭨            ⭦ right hand ⭧
                                                     KC_TRNS, KC_TRNS,                          /* split */                                     KC_TRNS,            KC_TRNS,
                                                              KC_TRNS,                          /* split */                                     KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                          /* split */                                     KC_TRNS,            KC_TRNS,            KC_TRNS
    ),
    // Layer 3
    [NAV] = LAYOUT_ergodox_pretty(
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_CALC,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_CAPS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_TRNS,    LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                /* split */                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_BTN4,     KC_TRNS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    /* split */     KC_TRNS,    LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_UP),    RALT(KC_RIGHT), KC_MS_BTN5,     KC_TRNS,
        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            /* split */                                 KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
    //             ⭦ left hand ⭧              ⭩ left thumb cluster ⭨                            /* split */                                             ⭩ right thumb cluster ⭨            ⭦ right hand ⭧
                                                     KC_TRNS, KC_TRNS,                          /* split */                                     KC_TRNS,            KC_TRNS,
                                                              KC_TRNS,                          /* split */                                     KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                          /* split */                                     KC_TRNS,            KC_TRNS,            KC_TRNS
    ),
};
// clang-format on

// nav_thumbs combo = 2 large buttons on the left thumb cluster
const uint16_t PROGMEM nav_thumb_left[] = {LT(RIGHT, KC_TAB), MT(MOD_LCTL, KC_BSPC), COMBO_END};
// nav_fd combo = F and D
const uint16_t PROGMEM nav_fd[]     = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM nav_thumbs[] = {MT(MOD_LCTL, KC_BSPC), MT(MOD_RCTL, KC_SPACE), COMBO_END};

combo_t key_combos[] = {
    COMBO(nav_thumb_left, MO(NAV)), // toggle the NAV layer while holding down both of the large thumb buttons on the left hand
    COMBO(nav_thumbs, MO(NAV)),     // toggle the NAV layer while holding down both thumbs
    COMBO(nav_fd, MO(NAV)),         // toggle the NAV layer while holding down F & D
};

// add <Left paren/right paren> to the alternate repeat key pairings
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_LPRN:
            return KC_RPRN;
        case KC_RPRN:
            return KC_LPRN;
    }

    return KC_TRNS; // Defer to default definitions.
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
