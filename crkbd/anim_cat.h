#pragma once

#include QMK_KEYBOARD_H

/* speed thresholds */
#define CAT_IDLE_SPEED          20
#define CAT_TAP_SPEED           40

/* frame counts */
#define CAT_IDLE_FRAMES         5
#define CAT_TAP_FRAMES          2

/* frame timing & size */
#define CAT_ANIM_FRAME_DURATION 200
#define CAT_ANIM_SIZE           636

void render_cat(void);
