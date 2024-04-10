// Copyright 2024 Rob (@rab1515)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define JOYSTICK_BUTTON_COUNT 11
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 6
// Min 8, max 16
#define JOYSTICK_AXIS_RESOLUTION 16
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
