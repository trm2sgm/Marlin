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

//#define Z_MIN_PROBE_PIN                     PB1    // PROBE


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
//#define FAN1_PIN                            PA8


// Beeper
#define BEEPER_PIN                          PB9

// Encoder
#define BTN_ENC                             PA0
#define BTN_EN1                             PA1
#define BTN_EN2                             PA2


// LDC {PA4 PA5 PA6 PA6 PB0}
#define TFT_MOSI_PIN                        PA7
#define TFT_MISO_PIN                        TFT_MOSI_PIN
#define TFT_SCK_PIN                         PA5
#define TFT_A0_PIN                          PA6
#define TFT_CS_PIN                          PA4
#define TFT_RESET_PIN                       PB0

// SD Card
#define SD_MOSI_PIN                         PB15
#define SD_MISO_PIN                         PB14
#define SD_SCK_PIN                          PB13
#define SD_SS_PIN                           PB12
#define SDSS                                SD_SS_PIN


// EEPROM
// #define I2C_EEPROM
// #define I2C_SCL_PIN                         PB10
// #define I2C_SDA_PIN                         PB11
// #define MARLIN_EEPROM_SIZE                  1024


/*
 1 VBAT  --
 2 PC13  E0_DIR_PIN
 3 PC14  E0_STEP_PIN
 4 PC15  E0_ENABLE_PIN
 5 PD0
 6 PD1
 7 NRST  ---
 8 PC0   TEMP_0_PIN
 9 PC1
10 PC2   TEMP_BED_PIN
11 PC3
12 VssA  ---
12 VddA  ---
14 PA0   BTN_ENC
15 PA1   BTN_EN1
16 PA2   BTN_EN2

17 PA3   Z_STOP_PIN
18 Vss4  ---
19 Vss5  ---
20 PA4   TFT_CS_PIN
21 PA5   TFT_SCK_PIN
22 PA6   TFT_A0_PIN
23 PA7   TFT_MOSI/MISO_PIN
24 PC4
25 PC5
26 PB0   TFT_RESET_PIN
27 PB1   Z_MIN_PROBE_PIN
28 PB2
29 PB10  I2C_SCL_PIN
30 PB11  I2C_SDA_PIN
31 Vss1  ---
32 Vdd1  ---

33 PB12  SD_SS_PIN
32 PB13  SD_SCK_PIN
35 PB14  SD_MISO_PIN
36 PB15  SD_MOSI_PIN
37 PC6   HEATER_0_PIN
38 PC7   HEATER_BED_PIN
39 PC8
40 PC9   FAN0_PIN
41 PA8   FAN1_PIN -- not working
42 PA9
43 PA10
44 PA11  Y_STOP_PIN
45 PA12  X_STOP_PIN
46 PA13  SWDIO
47 Vss2  ---
48 Vdd2  ---

49 PA14  SWCLK
50 PA15  JTDI
51 PC10  Z_DIR_PIN
52 PC11  Z_STEP_PIN
53 PC12  Z_ENABLE_PIN
54 PD2   Y_DIR_PIN
55 PB3   Y_STEP_PIN
56 PB4   Y_ENABLE_PIN
57 PB5   X_DIR_PIN
58 PB6   X_STEP_PIN
59 PB7   X_ENABLE_PIN
60 BOOT0 ---
61 PB8
62 PB9   BEEPER_PIN
63 Vss3  ---
64 VSS4  ---


*/