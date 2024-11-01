// copied over from my Oryx config (<https://configure.zsa.io/ergodox-ez/layouts>) so that I can use Combos/Caps Word/Repeat Key
#include QMK_KEYBOARD_H
#include "version.h"

// TODO: add enum with better layer names
// TODO: extend repeat key to include "(" and ")" (<https://docs.qmk.fm/features/repeat_key#alternate-repeating>)
// TODO: when holding `LT(3, KC_ENTER)`, the third LED (blue) flashes quickly once instead of remaining on

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ergodox_pretty(
        // R1
        /* left hand */ KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MEDIA_PLAY_PAUSE, /* right hand */ KC_PSCR, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        // R2
        /* left hand */ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_AUDIO_VOL_UP, /* right hand */ QK_ALT_REPEAT_KEY, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQUAL,
        // R3
        /* left hand */ MEH_T(KC_ESCAPE), KC_A, KC_S, KC_D, KC_F, KC_G, /* right hand */ KC_H, KC_J, KC_K, KC_L, KC_SCLN, MEH_T(KC_QUOTE),
        // R4
        /* left hand */ KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_AUDIO_VOL_DOWN, /* right hand */ QK_REPEAT_KEY, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT,
        // R5
        /* left hand */ KC_LEFT_CTRL, KC_MEH, RGB_TOG, KC_LEFT_GUI, KC_LEFT_ALT, /* right hand */ KC_RIGHT_ALT, KC_RIGHT_GUI, KC_APPLICATION, KC_MEH, KC_RIGHT_CTRL,
        // R6
        /* left hand */ KC_LEFT, KC_DOWN, /* right hand */ KC_UP, KC_RIGHT,
        // R7
        /* left hand */ KC_MS_BTN5, /* right hand */ KC_MS_BTN5,
        // R8
        /* left hand */ MT(MOD_LCTL, KC_BSPC), LT(1, KC_TAB), KC_MS_BTN4, /* right hand */ KC_MS_BTN4, LT(3, KC_ENTER), MT(MOD_RCTL, KC_SPACE)),
    // Layer 1 Symbols
    [1] = LAYOUT_ergodox_pretty(
        // R1
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R2
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PERC, KC_LBRC, KC_ASTR, KC_AT, KC_PIPE, KC_RBRC,
        // R3
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EXLM, KC_LPRN, KC_HASH, KC_UNDS, KC_MINUS, KC_RPRN,
        // R4
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC, KC_LCBR, KC_AMPR, KC_DLR, KC_BSLS, KC_RCBR,
        // R 5
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R6
        /* left hand */ RGB_HUD, RGB_HUI, RGB_M_P, RGB_TOG,
        // R7
        /* left hand */ RGB_SAI, TOGGLE_LAYER_COLOR,
        // R8
        /* left hand */ MT(MOD_LCTL, KC_DELETE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),

    // Layer 2 Navigation
    [2] = LAYOUT_ergodox_pretty(
        // R1
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CALCULATOR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R2
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME, KC_END, KC_PSCR, QK_REPEAT_KEY, KC_TRANSPARENT,
        // R3
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TILD, KC_GRAVE,
        // R4
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP, KC_PGDN, KC_INSERT, QK_ALT_REPEAT_KEY, KC_CAPS,
        // R5
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R6
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R7
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT,
        // R8
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    // Layer 3 Function Keys
    [3] = LAYOUT_ergodox_pretty(
        // R1
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R2
        /* left hand */ KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R3
        /* left hand */ KC_TRANSPARENT, KC_F5, KC_F6, KC_F7, KC_F8, KC_CALCULATOR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R4
        /* left hand */ KC_TRANSPARENT, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R5
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        // R6
        /* left hand */ RGB_HUD, RGB_HUI, RGB_M_P, RGB_TOG,
        // R7
        /* left hand */ UG_SATU, TOGGLE_LAYER_COLOR,
        // R8
        /* left hand */ KC_TRANSPARENT, KC_TRANSPARENT, UG_SATD, RGB_MODE_FORWARD, KC_TRANSPARENT, KC_TRANSPARENT),
};
// clang-format on

// nav_layer combo = 2 large buttons on the left thumb cluster
const uint16_t PROGMEM nav_layer[] = {LT(1, KC_TAB), MT(MOD_LCTL, KC_BSPC), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(nav_layer, MO(2)), // when holding the nav_layer combo, toggle Layer 2 (navigation layer)
};

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
