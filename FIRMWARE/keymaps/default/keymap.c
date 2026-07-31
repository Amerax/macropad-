
Keymap · C
#include QMK_KEYBOARD_H
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LCTL(KC_C),            LCTL(KC_V),            LCTL(KC_X),
        LCTL(KC_Z),            LCTL(KC_S),            LCTL(LSFT(KC_Z))  // encoder push = Redo
    ),
};
 
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
 
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("ORPHEUS PAD\n"), false);
    return false;
}
#endif
 
