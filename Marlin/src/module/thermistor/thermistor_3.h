/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4120 K, 4.7 kOhm pull-up, mendel-parts
constexpr temp_entry_t temptable_3[] PROGMEM = {
  { OV(   1), 410 },
  { OV(  54), 117 },
  { OV( 107), 87 },
  { OV( 160),  71 },
  { OV( 189),  66 },
  { OV( 213),  60 },
  { OV( 241),  55 },
  { OV( 271),  50 },
  { OV( 309),  44 },
  { OV( 350),  40 },
  { OV( 383),  35 },
  { OV( 426),  30 },
  { OV( 486),  26 },
  { OV( 531),  21 },
  { OV( 584),  15 },
  { OV( 637),  10 },
  { OV( 690),  5 },
  { OV( 743),  0 },
  { OV( 796),  -6 },
  { OV( 849),  -13 },
  { OV( 902),  -20 },
  { OV( 955), -31 },
  { OV(1008), -55 }
};
