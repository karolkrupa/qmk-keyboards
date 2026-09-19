#include "quantum.h"

#ifdef OLED_ENABLE
#include "oled.c"
#endif

void keyboard_pre_init_user(void) {
    gpio_set_pin_input_high(SPLIT_HAND_PIN);
}