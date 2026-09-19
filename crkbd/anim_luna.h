#pragma once

#include QMK_KEYBOARD_H

/* speed thresholds */
#define MIN_WALK_SPEED      10
#define MIN_RUN_SPEED       40

/* frame timing & size */
#define ANIM_FRAME_DURATION 200
#define ANIM_SIZE           96

/* state variables (defined in anim_luna.c) */
extern uint32_t anim_timer;
extern uint8_t  current_frame;
extern led_t    led_usb_state;

extern bool isSneaking;
extern bool isBarking;
extern bool isJumping;
extern bool showedJump;

void render_luna(int LUNA_X, int LUNA_Y);
