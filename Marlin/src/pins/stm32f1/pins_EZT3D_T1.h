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

#define BOARD_INFO_NAME "EZT3D T1"

//
// Limit Switches
//
#define X_STOP_PIN                          PA12   // X-STOP
#define Y_STOP_PIN                          PA11   // Y-STOP
#define Z_STOP_PIN                          PA3    // Z-STOP

#define Z_MIN_PROBE_PIN                     PB1    // PROBE


//
// Steppers
//
#define X_ENABLE_PIN                        PB7
#define X_STEP_PIN                          PB6
#define X_DIR_PIN                           PB5

#define Y_ENABLE_PIN                        PB4
#define Y_STEP_PIN                          PB3
#define Y_DIR_PIN                           PD2

#define Z_ENABLE_PIN                        PC12
#define Z_STEP_PIN                          PC11
#define Z_DIR_PIN                           PC10

#define E0_ENABLE_PIN                       PC15
#define E0_STEP_PIN                         PC14
#define E0_DIR_PIN                          PC13

//
// Temperature Sensors
//
#define TEMP_0_PIN                          PC0   // Analog Input "TH0"
#define TEMP_BED_PIN                        PC2   // Analog Input "TB0"

//
// Heaters / Fans
//
#define HEATER_0_PIN                        PC6   // "HE"
#define HEATER_BED_PIN                      PC7   // "HB"

#define FAN0_PIN                            PC9   // "FAN0"


// Beeper
//#define BEEPER_PIN                          

// Encoder
#define BTN_ENC                             PA0
#define BTN_EN1                             PA1
#define BTN_EN2                             PA2


// LDC
#define TFT_MOSI_PIN                        PA7
#define TFT_MISO_PIN                        PA6
#define TFT_SCK_PIN                         PA5
//#define TFT_SS_PIN                          PA4
#define TFT_A0_PIN                          PA4
#define TFT_CS_PIN                          PC5 

// SD Card
#define SD_MOSI_PIN                         PB15
#define SD_MISO_PIN                         PB14
#define SD_SCK_PIN                          PB13
#define SD_SS_PIN                           PB12
