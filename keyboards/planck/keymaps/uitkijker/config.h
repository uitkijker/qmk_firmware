/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// MOBILE COMPATILITY
// Lower power draw than the default of 500 mA to reduce smart device
// anxiety about the keyboard's hunger
#define USB_MAX_POWER_CONSUMPTION 100

/* CUSTOM HOLD-TAP
 *
 * I can be a lazy typer and want my slow Z's to still be Z's. Also, I do not
 * like misfires or timeouts. There's two ways to fix this:
 *   1.  Allowing only permissive holds during practically infinite tapping
 *       terms;
 *   2.  With retro tapping sending tap actions on key up when no other keys
 *       were pressed but the tapping term had expired.
 */

// PERMISSIVE HOLD
#define TAPPING_TERM 60000
#define PERMISSIVE_HOLD

// #define TAPPING_TERM 200
// #define RETRO_TAPPING

/* QMK DOCUMENTATION ON TAP HOLD
 * https://docs.qmk.fm/tap_hold
 *
 * TAPPING TERM
 * This determines what is a tap [during] and what is a hold [after]. This setting is defined in
 * milliseconds and defaults to 200ms.
 *
 * PERMISSIVE HOLD
 * [By default] if you press a dual-role key, tap another key (press and
 * release) and then release the dual-role key, all within the tapping term,
 * the dual-role key will perform its tap action. If the PERMISSIVE_HOLD option
 * is enabled, the dual-role key will perform its hold action instead.
 *
 * RETRO TAPPING
 * [By default] holding and releasing a dual-function key without pressing
 * another key will result in nothing happening. With RETRO_TAPPING enabled,
 * releasing the key without pressing another will send the original keycode
 * even if it is outside the tapping term.
 *
 */
