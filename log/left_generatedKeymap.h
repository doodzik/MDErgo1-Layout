/* Copyright (C) 2014-2015 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2016-02-29
// KLL Backend:        kiibohd
// KLL Git Rev:        b6cf0f13a88fef650f48270a1d1e20ccb1972d21
// KLL Git Changes:    None
// Compiler arguments:
//    /srv/KiiConf/controller/kll/kll.py
//      /srv/KiiConf/controller/Scan/ISSILed/capabilities.kll
//      /srv/KiiConf/controller/Scan/MatrixARM/capabilities.kll
//      /srv/KiiConf/controller/Scan/STLcd/capabilities.kll
//      /srv/KiiConf/controller/Scan/UARTConnect/capabilities.kll
//      /srv/KiiConf/controller/Macro/PartialMap/capabilities.kll
//      /srv/KiiConf/controller/Output/pjrcUSB/capabilities.kll
//      /srv/KiiConf/controller/Scan/MDErgo1/defaultMap.kll
//      /srv/KiiConf/controller/Scan/MDErgo1/leftHand.kll
//      /srv/KiiConf/controller/Scan/MDErgo1/slave1.kll
//      /srv/KiiConf/controller/Scan/MDErgo1/rightHand.kll
//      -d
//      MDErgo1-Default-0.kll
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      MDErgo1-Default-1.kll
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      MDErgo1-Default-2.kll
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      MDErgo1-Default-3.kll
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//      -p
//      MDErgo1-Default-7.kll
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    --backend
//      kiibohd
//    --templates
//      /srv/KiiConf/controller/kll/templates/kiibohdKeymap.h
//      /srv/KiiConf/controller/kll/templates/kiibohdDefs.h
//    --outputs
//      generatedKeymap.h
//      kll_defs.h
//
// - Base Layer -
//    ISSILedCapabilities
//      /srv/KiiConf/controller/Scan/ISSILed/capabilities.kll
//    MatrixArmCapabilities
//      /srv/KiiConf/controller/Scan/MatrixARM/capabilities.kll
//    STLcdCapabilities
//      /srv/KiiConf/controller/Scan/STLcd/capabilities.kll
//    UARTConnectCapabilities
//      /srv/KiiConf/controller/Scan/UARTConnect/capabilities.kll
//    PartialMapCapabilities
//      /srv/KiiConf/controller/Macro/PartialMap/capabilities.kll
//    pjrcUSBCapabilities
//      /srv/KiiConf/controller/Output/pjrcUSB/capabilities.kll
//    MDErgo1
//      /srv/KiiConf/controller/Scan/MDErgo1/defaultMap.kll
//    MDErgo1LeftHand
//      /srv/KiiConf/controller/Scan/MDErgo1/leftHand.kll
//    MDErgo1Slave1
//      /srv/KiiConf/controller/Scan/MDErgo1/slave1.kll
//    MDErgo1RightHand
//      /srv/KiiConf/controller/Scan/MDErgo1/rightHand.kll
// - Default Layer -
//    MDErgo1
//      MDErgo1-Default-0.kll
//    lcdFuncMap
//      /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
// - Partial Layers -
//    Layer 1
//     MDErgo1
//       MDErgo1-Default-1.kll
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 2
//     MDErgo1
//       MDErgo1-Default-2.kll
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 3
//     MDErgo1
//       MDErgo1-Default-3.kll
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 4
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 5
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 6
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll
//    Layer 7
//     MDErgo1
//       MDErgo1-Default-7.kll
//     lcdFuncMap
//       /srv/KiiConf/controller/kll/layouts/lcdFuncMap.kll



#pragma once

// ----- Includes -----

// KLL Include
#include <kll.h>



// ----- Capabilities -----

// Capability function declarations
void LCD_layerStackExact_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void LCD_layerStack_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void LED_control_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_layerLatch_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_layerLock_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_layerRotate_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_layerShift_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_layerState_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_consCtrlSend_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_flashMode_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_kbdProtocolBoot_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_kbdProtocolNKRO_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_noneSend_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_sysCtrlSend_capability( uint8_t state, uint8_t stateType, uint8_t *args );
void Output_usbCodeSend_capability( uint8_t state, uint8_t stateType, uint8_t *args );



// Indexed Capabilities Table
const Capability CapabilitiesList[] = {
	{ LCD_layerStackExact_capability, 9 },
	{ LCD_layerStack_capability, 0 },
	{ LED_control_capability, 4 },
	{ Macro_layerLatch_capability, 2 },
	{ Macro_layerLock_capability, 2 },
	{ Macro_layerRotate_capability, 1 },
	{ Macro_layerShift_capability, 2 },
	{ Macro_layerState_capability, 3 },
	{ Output_consCtrlSend_capability, 2 },
	{ Output_flashMode_capability, 0 },
	{ Output_kbdProtocolBoot_capability, 0 },
	{ Output_kbdProtocolNKRO_capability, 0 },
	{ Output_noneSend_capability, 0 },
	{ Output_sysCtrlSend_capability, 1 },
	{ Output_usbCodeSend_capability, 1 },
};


// -- Result Macros

// Result Macro Guides
Guide_RM( 0 ) = { 1, 14, KEY_2, 0 };
Guide_RM( 1 ) = { 2, 4, 2, 0, 1, 0 };
Guide_RM( 2 ) = { 1, 14, KEY_U, 0 };
Guide_RM( 3 ) = { 1, 14, KEY_S, 0 };
Guide_RM( 4 ) = { 1, 14, KEY_LCTRL, 0 };
Guide_RM( 5 ) = { 1, 14, KEY_H, 0 };
Guide_RM( 6 ) = { 1, 14, KEY_ESC, 0 };
Guide_RM( 7 ) = { 1, 14, KEY_RCTRL, 0 };
Guide_RM( 8 ) = { 1, 14, KEY_LGUI, 0 };
Guide_RM( 9 ) = { 1, 14, KEY_RIGHT, 0 };
Guide_RM( 10 ) = { 1, 14, KEY_T, 0 };
Guide_RM( 11 ) = { 1, 14, KEY_DELETE, 0 };
Guide_RM( 12 ) = { 1, 14, KEY_RGUI, 0 };
Guide_RM( 13 ) = { 1, 14, KEY_5, 0 };
Guide_RM( 14 ) = { 1, 14, KEY_LALT, 0 };
Guide_RM( 15 ) = { 1, 14, KEY_ENTER, 0 };
Guide_RM( 16 ) = { 1, 14, KEY_E, 0 };
Guide_RM( 17 ) = { 1, 14, KEY_RALT, 0 };
Guide_RM( 18 ) = { 1, 14, KEY_L, 0 };
Guide_RM( 19 ) = { 2, 3, 7, 0, 1, 0 };
Guide_RM( 20 ) = { 1, 14, KEY_TAB, 0 };
Guide_RM( 21 ) = { 1, 14, KEY_SPACE, 0 };
Guide_RM( 22 ) = { 1, 14, KEY_G, 0 };
Guide_RM( 23 ) = { 1, 14, KEY_O, 0 };
Guide_RM( 24 ) = { 1, 14, KEY_EQUAL, 0 };
Guide_RM( 25 ) = { 1, 14, KEY_I, 0 };
Guide_RM( 26 ) = { 1, 14, KEY_BACKSPACE, 0 };
Guide_RM( 27 ) = { 1, 14, KEY_RSHIFT, 0 };
Guide_RM( 28 ) = { 1, 14, KEY_D, 0 };
Guide_RM( 29 ) = { 1, 14, KEY_UP, 0 };
Guide_RM( 30 ) = { 1, 14, KEY_W, 0 };
Guide_RM( 31 ) = { 1, 14, KEY_BACKTICK, 0 };
Guide_RM( 32 ) = { 1, 14, KEY_PERIOD, 0 };
Guide_RM( 33 ) = { 1, 14, KEY_PAGE_UP, 0 };
Guide_RM( 34 ) = { 1, 14, KEY_DOWN, 0 };
Guide_RM( 35 ) = { 1, 14, KEY_SLASH, 0 };
Guide_RM( 36 ) = { 1, 14, KEY_C, 0 };
Guide_RM( 37 ) = { 1, 14, KEY_COMMA, 0 };
Guide_RM( 38 ) = { 1, 14, KEY_PAGE_DOWN, 0 };
Guide_RM( 39 ) = { 1, 14, KEY_LEFT_BRACKET, 0 };
Guide_RM( 40 ) = { 1, 14, KEY_R, 0 };
Guide_RM( 41 ) = { 1, 14, KEY_Q, 0 };
Guide_RM( 42 ) = { 1, 14, KEY_QUOTE, 0 };
Guide_RM( 43 ) = { 1, 14, KEY_F, 0 };
Guide_RM( 44 ) = { 1, 14, KEY_X, 0 };
Guide_RM( 45 ) = { 1, 14, KEY_V, 0 };
Guide_RM( 46 ) = { 1, 14, KEY_SEMICOLON, 0 };
Guide_RM( 47 ) = { 1, 14, KEY_B, 0 };
Guide_RM( 48 ) = { 1, 14, KEY_Y, 0 };
Guide_RM( 49 ) = { 1, 14, KEY_Z, 0 };
Guide_RM( 50 ) = { 1, 14, KEY_9, 0 };
Guide_RM( 51 ) = { 1, 14, KEY_LSHIFT, 0 };
Guide_RM( 52 ) = { 1, 14, KEY_1, 0 };
Guide_RM( 53 ) = { 1, 14, KEY_M, 0 };
Guide_RM( 54 ) = { 1, 14, KEY_6, 0 };
Guide_RM( 55 ) = { 1, 14, KEY_P, 0 };
Guide_RM( 56 ) = { 1, 14, KEY_0, 0 };
Guide_RM( 57 ) = { 1, 14, KEY_K, 0 };
Guide_RM( 58 ) = { 2, 5, 1, 1, 0 };
Guide_RM( 59 ) = { 1, 14, KEY_MINUS, 0 };
Guide_RM( 60 ) = { 1, 14, KEY_LEFT, 0 };
Guide_RM( 61 ) = { 1, 14, KEY_N, 0 };
Guide_RM( 62 ) = { 1, 14, KEY_J, 0 };
Guide_RM( 63 ) = { 1, 14, KEY_4, 0 };
Guide_RM( 64 ) = { 2, 5, 0, 1, 0 };
Guide_RM( 65 ) = { 1, 14, KEY_BACKSLASH, 0 };
Guide_RM( 66 ) = { 1, 14, KEY_7, 0 };
Guide_RM( 67 ) = { 2, 3, 6, 0, 1, 0 };
Guide_RM( 68 ) = { 1, 14, KEY_3, 0 };
Guide_RM( 69 ) = { 1, 14, KEY_RIGHT_BRACKET, 0 };
Guide_RM( 70 ) = { 1, 14, KEY_8, 0 };
Guide_RM( 71 ) = { 1, 14, KEY_A, 0 };
Guide_RM( 72 ) = { 1, 14, KEY_F2, 0 };
Guide_RM( 73 ) = { 1, 14, KEY_F12, 0 };
Guide_RM( 74 ) = { 1, 14, KEY_F11, 0 };
Guide_RM( 75 ) = { 1, 14, KEY_F5, 0 };
Guide_RM( 76 ) = { 1, 14, KEY_F9, 0 };
Guide_RM( 77 ) = { 1, 14, KEY_F1, 0 };
Guide_RM( 78 ) = { 1, 14, KEY_F6, 0 };
Guide_RM( 79 ) = { 1, 14, KEY_F10, 0 };
Guide_RM( 80 ) = { 1, 14, KEY_F4, 0 };
Guide_RM( 81 ) = { 1, 14, KEY_F7, 0 };
Guide_RM( 82 ) = { 1, 14, KEY_F3, 0 };
Guide_RM( 83 ) = { 1, 14, KEY_F8, 0 };
Guide_RM( 84 ) = { 1, 14, KEYPAD_PLUS, 0 };
Guide_RM( 85 ) = { 1, 14, KEYPAD_4, 0 };
Guide_RM( 86 ) = { 1, 14, KEYPAD_5, 0 };
Guide_RM( 87 ) = { 1, 14, KEYPAD_PERIOD, 0 };
Guide_RM( 88 ) = { 1, 14, KEYPAD_0, 0 };
Guide_RM( 89 ) = { 1, 14, KEYPAD_7, 0 };
Guide_RM( 90 ) = { 1, 14, KEYPAD_2, 0 };
Guide_RM( 91 ) = { 1, 14, KEYPAD_8, 0 };
Guide_RM( 92 ) = { 1, 14, KEYPAD_9, 0 };
Guide_RM( 93 ) = { 1, 14, KEYPAD_3, 0 };
Guide_RM( 94 ) = { 1, 14, KEYPAD_ENTER, 0 };
Guide_RM( 95 ) = { 1, 14, KEYPAD_ASTERISK, 0 };
Guide_RM( 96 ) = { 1, 14, KEYPAD_1, 0 };
Guide_RM( 97 ) = { 1, 14, KEYPAD_MINUS, 0 };
Guide_RM( 98 ) = { 1, 9, 0 };
Guide_RM( 99 ) = { 1, 14, KEYPAD_6, 0 };
Guide_RM( 100 ) = { 1, 14, KEY_NUM_LOCK, 0 };
Guide_RM( 101 ) = { 1, 14, KEYPAD_SLASH, 0 };
Guide_RM( 102 ) = { 2, 14, KEY_LSHIFT, 14, KEY_RIGHT_BRACKET, 0 };
Guide_RM( 103 ) = { 2, 14, KEY_LSHIFT, 14, KEY_9, 0 };
Guide_RM( 104 ) = { 2, 14, KEY_LSHIFT, 14, KEY_0, 0 };
Guide_RM( 105 ) = { 2, 14, KEY_LSHIFT, 14, KEY_3, 0 };
Guide_RM( 106 ) = { 2, 14, KEY_LSHIFT, 14, KEY_7, 0 };
Guide_RM( 107 ) = { 2, 14, KEY_LSHIFT, 14, KEY_2, 0 };
Guide_RM( 108 ) = { 2, 14, KEY_LSHIFT, 14, KEY_MINUS, 0 };
Guide_RM( 109 ) = { 2, 14, KEY_LSHIFT, 14, KEY_BACKSLASH, 0 };
Guide_RM( 110 ) = { 2, 14, KEY_LSHIFT, 14, KEY_1, 0 };
Guide_RM( 111 ) = { 2, 14, KEY_LSHIFT, 14, KEY_LEFT_BRACKET, 0 };
Guide_RM( 112 ) = { 1, 14, KEY_SELECT, 0 };


// -- Result Macro List

// Indexed Table of Result Macros
const ResultMacro ResultMacroList[] = {
	Define_RM( 0 ),
	Define_RM( 1 ),
	Define_RM( 2 ),
	Define_RM( 3 ),
	Define_RM( 4 ),
	Define_RM( 5 ),
	Define_RM( 6 ),
	Define_RM( 7 ),
	Define_RM( 8 ),
	Define_RM( 9 ),
	Define_RM( 10 ),
	Define_RM( 11 ),
	Define_RM( 12 ),
	Define_RM( 13 ),
	Define_RM( 14 ),
	Define_RM( 15 ),
	Define_RM( 16 ),
	Define_RM( 17 ),
	Define_RM( 18 ),
	Define_RM( 19 ),
	Define_RM( 20 ),
	Define_RM( 21 ),
	Define_RM( 22 ),
	Define_RM( 23 ),
	Define_RM( 24 ),
	Define_RM( 25 ),
	Define_RM( 26 ),
	Define_RM( 27 ),
	Define_RM( 28 ),
	Define_RM( 29 ),
	Define_RM( 30 ),
	Define_RM( 31 ),
	Define_RM( 32 ),
	Define_RM( 33 ),
	Define_RM( 34 ),
	Define_RM( 35 ),
	Define_RM( 36 ),
	Define_RM( 37 ),
	Define_RM( 38 ),
	Define_RM( 39 ),
	Define_RM( 40 ),
	Define_RM( 41 ),
	Define_RM( 42 ),
	Define_RM( 43 ),
	Define_RM( 44 ),
	Define_RM( 45 ),
	Define_RM( 46 ),
	Define_RM( 47 ),
	Define_RM( 48 ),
	Define_RM( 49 ),
	Define_RM( 50 ),
	Define_RM( 51 ),
	Define_RM( 52 ),
	Define_RM( 53 ),
	Define_RM( 54 ),
	Define_RM( 55 ),
	Define_RM( 56 ),
	Define_RM( 57 ),
	Define_RM( 58 ),
	Define_RM( 59 ),
	Define_RM( 60 ),
	Define_RM( 61 ),
	Define_RM( 62 ),
	Define_RM( 63 ),
	Define_RM( 64 ),
	Define_RM( 65 ),
	Define_RM( 66 ),
	Define_RM( 67 ),
	Define_RM( 68 ),
	Define_RM( 69 ),
	Define_RM( 70 ),
	Define_RM( 71 ),
	Define_RM( 72 ),
	Define_RM( 73 ),
	Define_RM( 74 ),
	Define_RM( 75 ),
	Define_RM( 76 ),
	Define_RM( 77 ),
	Define_RM( 78 ),
	Define_RM( 79 ),
	Define_RM( 80 ),
	Define_RM( 81 ),
	Define_RM( 82 ),
	Define_RM( 83 ),
	Define_RM( 84 ),
	Define_RM( 85 ),
	Define_RM( 86 ),
	Define_RM( 87 ),
	Define_RM( 88 ),
	Define_RM( 89 ),
	Define_RM( 90 ),
	Define_RM( 91 ),
	Define_RM( 92 ),
	Define_RM( 93 ),
	Define_RM( 94 ),
	Define_RM( 95 ),
	Define_RM( 96 ),
	Define_RM( 97 ),
	Define_RM( 98 ),
	Define_RM( 99 ),
	Define_RM( 100 ),
	Define_RM( 101 ),
	Define_RM( 102 ),
	Define_RM( 103 ),
	Define_RM( 104 ),
	Define_RM( 105 ),
	Define_RM( 106 ),
	Define_RM( 107 ),
	Define_RM( 108 ),
	Define_RM( 109 ),
	Define_RM( 110 ),
	Define_RM( 111 ),
	Define_RM( 112 ),
};


// -- Trigger Macro Record

// Keeps a record/state of each result macro
ResultMacroRecord ResultMacroRecordList[ ResultMacroNum ];


// -- Trigger Macros

// Trigger Macro Guides
Guide_TM( 0 ) = { 1, 0x00, 0x01, 0x06, 0 };
Guide_TM( 1 ) = { 1, 0x00, 0x01, 0x2F, 0 };
Guide_TM( 2 ) = { 1, 0x00, 0x01, 0x16, 0 };
Guide_TM( 3 ) = { 1, 0x00, 0x01, 0x46, 0 };
Guide_TM( 4 ) = { 1, 0x00, 0x01, 0x1A, 0 };
Guide_TM( 5 ) = { 1, 0x00, 0x01, 0x43, 0 };
Guide_TM( 6 ) = { 1, 0x00, 0x01, 0x02, 0 };
Guide_TM( 7 ) = { 1, 0x00, 0x01, 0x47, 0 };
Guide_TM( 8 ) = { 1, 0x00, 0x01, 0x29, 0 };
Guide_TM( 9 ) = { 1, 0x00, 0x01, 0x1B, 0 };
Guide_TM( 10 ) = { 1, 0x00, 0x01, 0x44, 0 };
Guide_TM( 11 ) = { 1, 0x00, 0x01, 0x26, 0 };
Guide_TM( 12 ) = { 1, 0x00, 0x01, 0x56, 0 };
Guide_TM( 13 ) = { 1, 0x00, 0x01, 0x03, 0 };
Guide_TM( 14 ) = { 1, 0x00, 0x01, 0x2A, 0 };
Guide_TM( 15 ) = { 1, 0x00, 0x01, 0x53, 0 };
Guide_TM( 16 ) = { 1, 0x00, 0x01, 0x17, 0 };
Guide_TM( 17 ) = { 1, 0x00, 0x01, 0x57, 0 };
Guide_TM( 18 ) = { 1, 0x00, 0x01, 0x3D, 0 };
Guide_TM( 19 ) = { 1, 0x00, 0x01, 0x2B, 0 };
Guide_TM( 20 ) = { 1, 0x00, 0x01, 0x11, 0 };
Guide_TM( 21 ) = { 1, 0x00, 0x01, 0x54, 0 };
Guide_TM( 22 ) = { 1, 0x00, 0x01, 0x3A, 0 };
Guide_TM( 23 ) = { 1, 0x00, 0x01, 0x18, 0 };
Guide_TM( 24 ) = { 1, 0x00, 0x01, 0x3E, 0 };
Guide_TM( 25 ) = { 1, 0x00, 0x01, 0x15, 0 };
Guide_TM( 26 ) = { 1, 0x00, 0x01, 0x27, 0 };
Guide_TM( 27 ) = { 1, 0x00, 0x01, 0x50, 0 };
Guide_TM( 28 ) = { 1, 0x00, 0x01, 0x42, 0 };
Guide_TM( 29 ) = { 1, 0x00, 0x01, 0x24, 0 };
Guide_TM( 30 ) = { 1, 0x00, 0x01, 0x4D, 0 };
Guide_TM( 31 ) = { 1, 0x00, 0x01, 0x28, 0 };
Guide_TM( 32 ) = { 1, 0x00, 0x01, 0x0E, 0 };
Guide_TM( 33 ) = { 1, 0x00, 0x01, 0x51, 0 };
Guide_TM( 34 ) = { 1, 0x00, 0x01, 0x25, 0 };
Guide_TM( 35 ) = { 1, 0x00, 0x01, 0x0B, 0 };
Guide_TM( 36 ) = { 1, 0x00, 0x01, 0x3B, 0 };
Guide_TM( 37 ) = { 1, 0x00, 0x01, 0x0F, 0 };
Guide_TM( 38 ) = { 1, 0x00, 0x01, 0x52, 0 };
Guide_TM( 39 ) = { 1, 0x00, 0x01, 0x38, 0 };
Guide_TM( 40 ) = { 1, 0x00, 0x01, 0x3C, 0 };
Guide_TM( 41 ) = { 1, 0x00, 0x01, 0x21, 0 };
Guide_TM( 42 ) = { 1, 0x00, 0x01, 0x10, 0 };
Guide_TM( 43 ) = { 1, 0x00, 0x01, 0x39, 0 };
Guide_TM( 44 ) = { 1, 0x00, 0x01, 0x1E, 0 };
Guide_TM( 45 ) = { 1, 0x00, 0x01, 0x4E, 0 };
Guide_TM( 46 ) = { 1, 0x00, 0x01, 0x22, 0 };
Guide_TM( 47 ) = { 1, 0x00, 0x01, 0x4B, 0 };
Guide_TM( 48 ) = { 1, 0x00, 0x01, 0x0C, 0 };
Guide_TM( 49 ) = { 1, 0x00, 0x01, 0x4F, 0 };
Guide_TM( 50 ) = { 1, 0x00, 0x01, 0x33, 0 };
Guide_TM( 51 ) = { 1, 0x00, 0x01, 0x23, 0 };
Guide_TM( 52 ) = { 1, 0x00, 0x01, 0x07, 0 };
Guide_TM( 53 ) = { 1, 0x00, 0x01, 0x4C, 0 };
Guide_TM( 54 ) = { 1, 0x00, 0x01, 0x30, 0 };
Guide_TM( 55 ) = { 1, 0x00, 0x01, 0x0D, 0 };
Guide_TM( 56 ) = { 1, 0x00, 0x01, 0x34, 0 };
Guide_TM( 57 ) = { 1, 0x00, 0x01, 0x08, 0 };
Guide_TM( 58 ) = { 1, 0x00, 0x01, 0x1F, 0 };
Guide_TM( 59 ) = { 1, 0x00, 0x01, 0x48, 0 };
Guide_TM( 60 ) = { 1, 0x00, 0x01, 0x35, 0 };
Guide_TM( 61 ) = { 1, 0x00, 0x01, 0x1C, 0 };
Guide_TM( 62 ) = { 1, 0x00, 0x01, 0x45, 0 };
Guide_TM( 63 ) = { 1, 0x00, 0x01, 0x20, 0 };
Guide_TM( 64 ) = { 1, 0x00, 0x01, 0x04, 0 };
Guide_TM( 65 ) = { 1, 0x00, 0x01, 0x49, 0 };
Guide_TM( 66 ) = { 1, 0x00, 0x01, 0x1D, 0 };
Guide_TM( 67 ) = { 1, 0x00, 0x01, 0x31, 0 };
Guide_TM( 68 ) = { 1, 0x00, 0x01, 0x58, 0 };
Guide_TM( 69 ) = { 1, 0x00, 0x01, 0x05, 0 };
Guide_TM( 70 ) = { 1, 0x00, 0x01, 0x4A, 0 };
Guide_TM( 71 ) = { 1, 0x00, 0x01, 0x2C, 0 };
Guide_TM( 72 ) = { 1, 0x00, 0x01, 0x55, 0 };
Guide_TM( 73 ) = { 1, 0x00, 0x01, 0x32, 0 };
Guide_TM( 74 ) = { 1, 0x00, 0x01, 0x19, 0 };
Guide_TM( 75 ) = { 1, 0x00, 0x01, 0x59, 0 };
Guide_TM( 76 ) = { 1, 0x00, 0x01, 0x06, 0 };
Guide_TM( 77 ) = { 1, 0x00, 0x01, 0x2F, 0 };
Guide_TM( 78 ) = { 1, 0x00, 0x01, 0x02, 0 };
Guide_TM( 79 ) = { 1, 0x00, 0x01, 0x03, 0 };
Guide_TM( 80 ) = { 1, 0x00, 0x01, 0x33, 0 };
Guide_TM( 81 ) = { 1, 0x00, 0x01, 0x07, 0 };
Guide_TM( 82 ) = { 1, 0x00, 0x01, 0x30, 0 };
Guide_TM( 83 ) = { 1, 0x00, 0x01, 0x34, 0 };
Guide_TM( 84 ) = { 1, 0x00, 0x01, 0x04, 0 };
Guide_TM( 85 ) = { 1, 0x00, 0x01, 0x31, 0 };
Guide_TM( 86 ) = { 1, 0x00, 0x01, 0x05, 0 };
Guide_TM( 87 ) = { 1, 0x00, 0x01, 0x32, 0 };
Guide_TM( 88 ) = { 1, 0x00, 0x01, 0x46, 0 };
Guide_TM( 89 ) = { 1, 0x00, 0x01, 0x43, 0 };
Guide_TM( 90 ) = { 1, 0x00, 0x01, 0x44, 0 };
Guide_TM( 91 ) = { 1, 0x00, 0x01, 0x57, 0 };
Guide_TM( 92 ) = { 1, 0x00, 0x01, 0x3D, 0 };
Guide_TM( 93 ) = { 1, 0x00, 0x01, 0x54, 0 };
Guide_TM( 94 ) = { 1, 0x00, 0x01, 0x3A, 0 };
Guide_TM( 95 ) = { 1, 0x00, 0x01, 0x4D, 0 };
Guide_TM( 96 ) = { 1, 0x00, 0x01, 0x3B, 0 };
Guide_TM( 97 ) = { 1, 0x00, 0x01, 0x3C, 0 };
Guide_TM( 98 ) = { 1, 0x00, 0x01, 0x4E, 0 };
Guide_TM( 99 ) = { 1, 0x00, 0x01, 0x4F, 0 };
Guide_TM( 100 ) = { 1, 0x00, 0x01, 0x33, 0 };
Guide_TM( 101 ) = { 1, 0x00, 0x01, 0x4C, 0 };
Guide_TM( 102 ) = { 1, 0x00, 0x01, 0x34, 0 };
Guide_TM( 103 ) = { 1, 0x00, 0x01, 0x08, 0 };
Guide_TM( 104 ) = { 1, 0x00, 0x01, 0x45, 0 };
Guide_TM( 105 ) = { 1, 0x00, 0x01, 0x31, 0 };
Guide_TM( 106 ) = { 1, 0x00, 0x01, 0x58, 0 };
Guide_TM( 107 ) = { 1, 0x00, 0x01, 0x32, 0 };
Guide_TM( 108 ) = { 1, 0x00, 0x01, 0x46, 0 };
Guide_TM( 109 ) = { 1, 0x00, 0x01, 0x43, 0 };
Guide_TM( 110 ) = { 1, 0x00, 0x01, 0x44, 0 };
Guide_TM( 111 ) = { 1, 0x00, 0x01, 0x3A, 0 };
Guide_TM( 112 ) = { 1, 0x00, 0x01, 0x4D, 0 };
Guide_TM( 113 ) = { 1, 0x00, 0x01, 0x3B, 0 };
Guide_TM( 114 ) = { 1, 0x00, 0x01, 0x3C, 0 };
Guide_TM( 115 ) = { 1, 0x00, 0x01, 0x4E, 0 };
Guide_TM( 116 ) = { 1, 0x00, 0x01, 0x4C, 0 };
Guide_TM( 117 ) = { 1, 0x00, 0x01, 0x45, 0 };
Guide_TM( 118 ) = { 1, 0x00, 0x01, 0x55, 0 };
Guide_TM( 119 ) = { 1, 0x00, 0x01, 0x3A, 0 };
Guide_TM( 120 ) = { 1, 0x00, 0x01, 0x4D, 0 };
Guide_TM( 121 ) = { 1, 0x00, 0x01, 0x3B, 0 };
Guide_TM( 122 ) = { 1, 0x00, 0x01, 0x4C, 0 };


// -- Trigger Macro List

// Indexed Table of Trigger Macros
const TriggerMacro TriggerMacroList[] = {
	Define_TM( 0, 0 ),
	Define_TM( 1, 1 ),
	Define_TM( 2, 2 ),
	Define_TM( 3, 3 ),
	Define_TM( 4, 4 ),
	Define_TM( 5, 5 ),
	Define_TM( 6, 6 ),
	Define_TM( 7, 7 ),
	Define_TM( 8, 8 ),
	Define_TM( 9, 9 ),
	Define_TM( 10, 10 ),
	Define_TM( 11, 11 ),
	Define_TM( 12, 12 ),
	Define_TM( 13, 13 ),
	Define_TM( 14, 14 ),
	Define_TM( 15, 15 ),
	Define_TM( 16, 16 ),
	Define_TM( 17, 17 ),
	Define_TM( 18, 18 ),
	Define_TM( 19, 19 ),
	Define_TM( 20, 20 ),
	Define_TM( 21, 21 ),
	Define_TM( 22, 22 ),
	Define_TM( 23, 23 ),
	Define_TM( 24, 24 ),
	Define_TM( 25, 25 ),
	Define_TM( 26, 26 ),
	Define_TM( 27, 27 ),
	Define_TM( 28, 28 ),
	Define_TM( 29, 29 ),
	Define_TM( 30, 30 ),
	Define_TM( 31, 31 ),
	Define_TM( 32, 32 ),
	Define_TM( 33, 33 ),
	Define_TM( 34, 34 ),
	Define_TM( 35, 35 ),
	Define_TM( 36, 36 ),
	Define_TM( 37, 37 ),
	Define_TM( 38, 38 ),
	Define_TM( 39, 39 ),
	Define_TM( 40, 40 ),
	Define_TM( 41, 41 ),
	Define_TM( 42, 42 ),
	Define_TM( 43, 43 ),
	Define_TM( 44, 44 ),
	Define_TM( 45, 45 ),
	Define_TM( 46, 46 ),
	Define_TM( 47, 47 ),
	Define_TM( 48, 48 ),
	Define_TM( 49, 49 ),
	Define_TM( 50, 50 ),
	Define_TM( 51, 51 ),
	Define_TM( 52, 52 ),
	Define_TM( 53, 53 ),
	Define_TM( 54, 54 ),
	Define_TM( 55, 55 ),
	Define_TM( 56, 56 ),
	Define_TM( 57, 24 ),
	Define_TM( 58, 57 ),
	Define_TM( 59, 58 ),
	Define_TM( 60, 59 ),
	Define_TM( 61, 60 ),
	Define_TM( 62, 61 ),
	Define_TM( 63, 62 ),
	Define_TM( 64, 63 ),
	Define_TM( 65, 64 ),
	Define_TM( 66, 65 ),
	Define_TM( 67, 66 ),
	Define_TM( 68, 67 ),
	Define_TM( 69, 68 ),
	Define_TM( 70, 69 ),
	Define_TM( 71, 8 ),
	Define_TM( 72, 59 ),
	Define_TM( 73, 70 ),
	Define_TM( 74, 71 ),
	Define_TM( 75, 12 ),
	Define_TM( 76, 72 ),
	Define_TM( 77, 73 ),
	Define_TM( 78, 74 ),
	Define_TM( 79, 75 ),
	Define_TM( 80, 76 ),
	Define_TM( 81, 77 ),
	Define_TM( 82, 78 ),
	Define_TM( 83, 79 ),
	Define_TM( 84, 80 ),
	Define_TM( 85, 81 ),
	Define_TM( 86, 82 ),
	Define_TM( 87, 83 ),
	Define_TM( 88, 84 ),
	Define_TM( 89, 85 ),
	Define_TM( 90, 86 ),
	Define_TM( 91, 87 ),
	Define_TM( 92, 84 ),
	Define_TM( 93, 88 ),
	Define_TM( 94, 89 ),
	Define_TM( 95, 90 ),
	Define_TM( 96, 91 ),
	Define_TM( 97, 92 ),
	Define_TM( 98, 93 ),
	Define_TM( 99, 94 ),
	Define_TM( 100, 95 ),
	Define_TM( 101, 96 ),
	Define_TM( 102, 97 ),
	Define_TM( 103, 98 ),
	Define_TM( 104, 99 ),
	Define_TM( 105, 100 ),
	Define_TM( 106, 94 ),
	Define_TM( 107, 101 ),
	Define_TM( 108, 102 ),
	Define_TM( 109, 103 ),
	Define_TM( 110, 104 ),
	Define_TM( 111, 105 ),
	Define_TM( 112, 106 ),
	Define_TM( 113, 107 ),
	Define_TM( 114, 108 ),
	Define_TM( 115, 109 ),
	Define_TM( 116, 110 ),
	Define_TM( 117, 111 ),
	Define_TM( 118, 112 ),
	Define_TM( 119, 106 ),
	Define_TM( 120, 110 ),
	Define_TM( 121, 109 ),
	Define_TM( 122, 105 ),
};


// -- Trigger Macro Record List

// Keeps a record/state of each trigger macro
TriggerMacroRecord TriggerMacroRecordList[ TriggerMacroNum ];



// ----- Trigger Maps -----

// MaxScanCode
// - This is retrieved from the KLL configuration
// - Should be corollated with the max scan code in the scan module
// - Maximum value is 0x100 (0x0 to 0xFF)
// - Increasing it beyond the keyboard's capabilities is just a waste of ram...
#define MaxScanCode 0x59

// -- Trigger Lists
//
// Index 0: # of triggers in list
// Index n: pointer to trigger macro - use tm() macro

// - Default Layer -
Define_TL( default, 0x02 ) = { 1, 6 };
Define_TL( default, 0x03 ) = { 1, 13 };
Define_TL( default, 0x04 ) = { 1, 64 };
Define_TL( default, 0x05 ) = { 1, 69 };
Define_TL( default, 0x06 ) = { 1, 0 };
Define_TL( default, 0x07 ) = { 1, 52 };
Define_TL( default, 0x08 ) = { 1, 57 };
Define_TL( default, 0x09 ) = { 0 };
Define_TL( default, 0x0A ) = { 0 };
Define_TL( default, 0x0B ) = { 1, 35 };
Define_TL( default, 0x0C ) = { 1, 48 };
Define_TL( default, 0x0D ) = { 1, 55 };
Define_TL( default, 0x0E ) = { 1, 32 };
Define_TL( default, 0x0F ) = { 1, 37 };
Define_TL( default, 0x10 ) = { 1, 42 };
Define_TL( default, 0x11 ) = { 1, 20 };
Define_TL( default, 0x12 ) = { 0 };
Define_TL( default, 0x13 ) = { 0 };
Define_TL( default, 0x14 ) = { 0 };
Define_TL( default, 0x15 ) = { 1, 25 };
Define_TL( default, 0x16 ) = { 1, 2 };
Define_TL( default, 0x17 ) = { 1, 16 };
Define_TL( default, 0x18 ) = { 1, 23 };
Define_TL( default, 0x19 ) = { 1, 74 };
Define_TL( default, 0x1A ) = { 1, 4 };
Define_TL( default, 0x1B ) = { 1, 9 };
Define_TL( default, 0x1C ) = { 1, 61 };
Define_TL( default, 0x1D ) = { 1, 66 };
Define_TL( default, 0x1E ) = { 1, 44 };
Define_TL( default, 0x1F ) = { 1, 58 };
Define_TL( default, 0x20 ) = { 1, 63 };
Define_TL( default, 0x21 ) = { 1, 41 };
Define_TL( default, 0x22 ) = { 1, 46 };
Define_TL( default, 0x23 ) = { 1, 51 };
Define_TL( default, 0x24 ) = { 1, 29 };
Define_TL( default, 0x25 ) = { 1, 34 };
Define_TL( default, 0x26 ) = { 1, 11 };
Define_TL( default, 0x27 ) = { 1, 26 };
Define_TL( default, 0x28 ) = { 1, 31 };
Define_TL( default, 0x29 ) = { 1, 8 };
Define_TL( default, 0x2A ) = { 1, 14 };
Define_TL( default, 0x2B ) = { 1, 19 };
Define_TL( default, 0x2C ) = { 1, 71 };
Define_TL( default, 0x2D ) = { 0 };
Define_TL( default, 0x2E ) = { 0 };
Define_TL( default, 0x2F ) = { 1, 1 };
Define_TL( default, 0x30 ) = { 1, 54 };
Define_TL( default, 0x31 ) = { 1, 67 };
Define_TL( default, 0x32 ) = { 1, 73 };
Define_TL( default, 0x33 ) = { 1, 50 };
Define_TL( default, 0x34 ) = { 1, 56 };
Define_TL( default, 0x35 ) = { 1, 60 };
Define_TL( default, 0x36 ) = { 0 };
Define_TL( default, 0x37 ) = { 0 };
Define_TL( default, 0x38 ) = { 1, 39 };
Define_TL( default, 0x39 ) = { 1, 43 };
Define_TL( default, 0x3A ) = { 1, 22 };
Define_TL( default, 0x3B ) = { 1, 36 };
Define_TL( default, 0x3C ) = { 1, 40 };
Define_TL( default, 0x3D ) = { 1, 18 };
Define_TL( default, 0x3E ) = { 1, 24 };
Define_TL( default, 0x3F ) = { 0 };
Define_TL( default, 0x40 ) = { 0 };
Define_TL( default, 0x41 ) = { 0 };
Define_TL( default, 0x42 ) = { 1, 28 };
Define_TL( default, 0x43 ) = { 1, 5 };
Define_TL( default, 0x44 ) = { 1, 10 };
Define_TL( default, 0x45 ) = { 1, 62 };
Define_TL( default, 0x46 ) = { 1, 3 };
Define_TL( default, 0x47 ) = { 1, 7 };
Define_TL( default, 0x48 ) = { 1, 59 };
Define_TL( default, 0x49 ) = { 1, 65 };
Define_TL( default, 0x4A ) = { 1, 70 };
Define_TL( default, 0x4B ) = { 1, 47 };
Define_TL( default, 0x4C ) = { 1, 53 };
Define_TL( default, 0x4D ) = { 1, 30 };
Define_TL( default, 0x4E ) = { 1, 45 };
Define_TL( default, 0x4F ) = { 1, 49 };
Define_TL( default, 0x50 ) = { 1, 27 };
Define_TL( default, 0x51 ) = { 1, 33 };
Define_TL( default, 0x52 ) = { 1, 38 };
Define_TL( default, 0x53 ) = { 1, 15 };
Define_TL( default, 0x54 ) = { 1, 21 };
Define_TL( default, 0x55 ) = { 1, 72 };
Define_TL( default, 0x56 ) = { 1, 12 };
Define_TL( default, 0x57 ) = { 1, 17 };
Define_TL( default, 0x58 ) = { 1, 68 };
Define_TL( default, 0x59 ) = { 1, 75 };


// - Partial Layers -
// Partial Layer 1
Define_TL( layer1, 0x02 ) = { 1, 78 };
Define_TL( layer1, 0x03 ) = { 1, 79 };
Define_TL( layer1, 0x04 ) = { 1, 84 };
Define_TL( layer1, 0x05 ) = { 1, 86 };
Define_TL( layer1, 0x06 ) = { 1, 76 };
Define_TL( layer1, 0x07 ) = { 1, 81 };
Define_TL( layer1, 0x08 ) = { 0 };
Define_TL( layer1, 0x09 ) = { 0 };
Define_TL( layer1, 0x0A ) = { 0 };
Define_TL( layer1, 0x0B ) = { 0 };
Define_TL( layer1, 0x0C ) = { 0 };
Define_TL( layer1, 0x0D ) = { 0 };
Define_TL( layer1, 0x0E ) = { 0 };
Define_TL( layer1, 0x0F ) = { 0 };
Define_TL( layer1, 0x10 ) = { 0 };
Define_TL( layer1, 0x11 ) = { 0 };
Define_TL( layer1, 0x12 ) = { 0 };
Define_TL( layer1, 0x13 ) = { 0 };
Define_TL( layer1, 0x14 ) = { 0 };
Define_TL( layer1, 0x15 ) = { 0 };
Define_TL( layer1, 0x16 ) = { 0 };
Define_TL( layer1, 0x17 ) = { 0 };
Define_TL( layer1, 0x18 ) = { 0 };
Define_TL( layer1, 0x19 ) = { 0 };
Define_TL( layer1, 0x1A ) = { 0 };
Define_TL( layer1, 0x1B ) = { 0 };
Define_TL( layer1, 0x1C ) = { 0 };
Define_TL( layer1, 0x1D ) = { 0 };
Define_TL( layer1, 0x1E ) = { 0 };
Define_TL( layer1, 0x1F ) = { 0 };
Define_TL( layer1, 0x20 ) = { 0 };
Define_TL( layer1, 0x21 ) = { 0 };
Define_TL( layer1, 0x22 ) = { 0 };
Define_TL( layer1, 0x23 ) = { 0 };
Define_TL( layer1, 0x24 ) = { 0 };
Define_TL( layer1, 0x25 ) = { 0 };
Define_TL( layer1, 0x26 ) = { 0 };
Define_TL( layer1, 0x27 ) = { 0 };
Define_TL( layer1, 0x28 ) = { 0 };
Define_TL( layer1, 0x29 ) = { 0 };
Define_TL( layer1, 0x2A ) = { 0 };
Define_TL( layer1, 0x2B ) = { 0 };
Define_TL( layer1, 0x2C ) = { 0 };
Define_TL( layer1, 0x2D ) = { 0 };
Define_TL( layer1, 0x2E ) = { 0 };
Define_TL( layer1, 0x2F ) = { 1, 77 };
Define_TL( layer1, 0x30 ) = { 1, 82 };
Define_TL( layer1, 0x31 ) = { 1, 85 };
Define_TL( layer1, 0x32 ) = { 1, 87 };
Define_TL( layer1, 0x33 ) = { 1, 80 };
Define_TL( layer1, 0x34 ) = { 1, 83 };

// Partial Layer 2
Define_TL( layer2, 0x08 ) = { 1, 103 };
Define_TL( layer2, 0x09 ) = { 0 };
Define_TL( layer2, 0x0A ) = { 0 };
Define_TL( layer2, 0x0B ) = { 0 };
Define_TL( layer2, 0x0C ) = { 0 };
Define_TL( layer2, 0x0D ) = { 0 };
Define_TL( layer2, 0x0E ) = { 0 };
Define_TL( layer2, 0x0F ) = { 0 };
Define_TL( layer2, 0x10 ) = { 0 };
Define_TL( layer2, 0x11 ) = { 0 };
Define_TL( layer2, 0x12 ) = { 0 };
Define_TL( layer2, 0x13 ) = { 0 };
Define_TL( layer2, 0x14 ) = { 0 };
Define_TL( layer2, 0x15 ) = { 0 };
Define_TL( layer2, 0x16 ) = { 0 };
Define_TL( layer2, 0x17 ) = { 0 };
Define_TL( layer2, 0x18 ) = { 0 };
Define_TL( layer2, 0x19 ) = { 0 };
Define_TL( layer2, 0x1A ) = { 0 };
Define_TL( layer2, 0x1B ) = { 0 };
Define_TL( layer2, 0x1C ) = { 0 };
Define_TL( layer2, 0x1D ) = { 0 };
Define_TL( layer2, 0x1E ) = { 0 };
Define_TL( layer2, 0x1F ) = { 0 };
Define_TL( layer2, 0x20 ) = { 0 };
Define_TL( layer2, 0x21 ) = { 0 };
Define_TL( layer2, 0x22 ) = { 0 };
Define_TL( layer2, 0x23 ) = { 0 };
Define_TL( layer2, 0x24 ) = { 0 };
Define_TL( layer2, 0x25 ) = { 0 };
Define_TL( layer2, 0x26 ) = { 0 };
Define_TL( layer2, 0x27 ) = { 0 };
Define_TL( layer2, 0x28 ) = { 0 };
Define_TL( layer2, 0x29 ) = { 0 };
Define_TL( layer2, 0x2A ) = { 0 };
Define_TL( layer2, 0x2B ) = { 0 };
Define_TL( layer2, 0x2C ) = { 0 };
Define_TL( layer2, 0x2D ) = { 0 };
Define_TL( layer2, 0x2E ) = { 0 };
Define_TL( layer2, 0x2F ) = { 0 };
Define_TL( layer2, 0x30 ) = { 0 };
Define_TL( layer2, 0x31 ) = { 1, 105 };
Define_TL( layer2, 0x32 ) = { 1, 107 };
Define_TL( layer2, 0x33 ) = { 1, 100 };
Define_TL( layer2, 0x34 ) = { 1, 102 };
Define_TL( layer2, 0x35 ) = { 0 };
Define_TL( layer2, 0x36 ) = { 0 };
Define_TL( layer2, 0x37 ) = { 0 };
Define_TL( layer2, 0x38 ) = { 0 };
Define_TL( layer2, 0x39 ) = { 0 };
Define_TL( layer2, 0x3A ) = { 1, 94 };
Define_TL( layer2, 0x3B ) = { 1, 96 };
Define_TL( layer2, 0x3C ) = { 1, 97 };
Define_TL( layer2, 0x3D ) = { 1, 92 };
Define_TL( layer2, 0x3E ) = { 0 };
Define_TL( layer2, 0x3F ) = { 0 };
Define_TL( layer2, 0x40 ) = { 0 };
Define_TL( layer2, 0x41 ) = { 0 };
Define_TL( layer2, 0x42 ) = { 0 };
Define_TL( layer2, 0x43 ) = { 1, 89 };
Define_TL( layer2, 0x44 ) = { 1, 90 };
Define_TL( layer2, 0x45 ) = { 1, 104 };
Define_TL( layer2, 0x46 ) = { 1, 88 };
Define_TL( layer2, 0x47 ) = { 0 };
Define_TL( layer2, 0x48 ) = { 0 };
Define_TL( layer2, 0x49 ) = { 0 };
Define_TL( layer2, 0x4A ) = { 0 };
Define_TL( layer2, 0x4B ) = { 0 };
Define_TL( layer2, 0x4C ) = { 1, 101 };
Define_TL( layer2, 0x4D ) = { 1, 95 };
Define_TL( layer2, 0x4E ) = { 1, 98 };
Define_TL( layer2, 0x4F ) = { 1, 99 };
Define_TL( layer2, 0x50 ) = { 0 };
Define_TL( layer2, 0x51 ) = { 0 };
Define_TL( layer2, 0x52 ) = { 0 };
Define_TL( layer2, 0x53 ) = { 0 };
Define_TL( layer2, 0x54 ) = { 1, 93 };
Define_TL( layer2, 0x55 ) = { 0 };
Define_TL( layer2, 0x56 ) = { 0 };
Define_TL( layer2, 0x57 ) = { 1, 91 };
Define_TL( layer2, 0x58 ) = { 1, 106 };

// Partial Layer 3
Define_TL( layer3, 0x3A ) = { 1, 111 };
Define_TL( layer3, 0x3B ) = { 1, 113 };
Define_TL( layer3, 0x3C ) = { 1, 114 };
Define_TL( layer3, 0x3D ) = { 0 };
Define_TL( layer3, 0x3E ) = { 0 };
Define_TL( layer3, 0x3F ) = { 0 };
Define_TL( layer3, 0x40 ) = { 0 };
Define_TL( layer3, 0x41 ) = { 0 };
Define_TL( layer3, 0x42 ) = { 0 };
Define_TL( layer3, 0x43 ) = { 1, 109 };
Define_TL( layer3, 0x44 ) = { 1, 110 };
Define_TL( layer3, 0x45 ) = { 1, 117 };
Define_TL( layer3, 0x46 ) = { 1, 108 };
Define_TL( layer3, 0x47 ) = { 0 };
Define_TL( layer3, 0x48 ) = { 0 };
Define_TL( layer3, 0x49 ) = { 0 };
Define_TL( layer3, 0x4A ) = { 0 };
Define_TL( layer3, 0x4B ) = { 0 };
Define_TL( layer3, 0x4C ) = { 1, 116 };
Define_TL( layer3, 0x4D ) = { 1, 112 };
Define_TL( layer3, 0x4E ) = { 1, 115 };
Define_TL( layer3, 0x4F ) = { 0 };
Define_TL( layer3, 0x50 ) = { 0 };
Define_TL( layer3, 0x51 ) = { 0 };
Define_TL( layer3, 0x52 ) = { 0 };
Define_TL( layer3, 0x53 ) = { 0 };
Define_TL( layer3, 0x54 ) = { 0 };
Define_TL( layer3, 0x55 ) = { 1, 118 };

// Partial Layer 4
Define_TL( layer4, 0x00 ) = { 0 };

// Partial Layer 5
Define_TL( layer5, 0x00 ) = { 0 };

// Partial Layer 6
Define_TL( layer6, 0x00 ) = { 0 };

// Partial Layer 7
Define_TL( layer7, 0x3A ) = { 1, 119 };
Define_TL( layer7, 0x3B ) = { 1, 121 };
Define_TL( layer7, 0x3C ) = { 1, 114 };
Define_TL( layer7, 0x3D ) = { 0 };
Define_TL( layer7, 0x3E ) = { 0 };
Define_TL( layer7, 0x3F ) = { 0 };
Define_TL( layer7, 0x40 ) = { 0 };
Define_TL( layer7, 0x41 ) = { 0 };
Define_TL( layer7, 0x42 ) = { 0 };
Define_TL( layer7, 0x43 ) = { 1, 109 };
Define_TL( layer7, 0x44 ) = { 1, 110 };
Define_TL( layer7, 0x45 ) = { 1, 117 };
Define_TL( layer7, 0x46 ) = { 1, 108 };
Define_TL( layer7, 0x47 ) = { 0 };
Define_TL( layer7, 0x48 ) = { 0 };
Define_TL( layer7, 0x49 ) = { 0 };
Define_TL( layer7, 0x4A ) = { 0 };
Define_TL( layer7, 0x4B ) = { 0 };
Define_TL( layer7, 0x4C ) = { 1, 122 };
Define_TL( layer7, 0x4D ) = { 1, 120 };


// -- ScanCode Offset Map
// Maps interconnect ids to scancode offsets
//
// Only used for keyboards with an interconnect
const uint8_t InterconnectOffsetList[] = {
	0x2D,
	0x59,
};


// -- ScanCode Indexed Maps
// Maps to a trigger list of macro pointers
//                 _
// <scan code> -> |T|
//                |r| -> <trigger macro pointer 1>
//                |i|
//                |g| -> <trigger macro pointer 2>
//                |g|
//                |e| -> <trigger macro pointer 3>
//                |r|
//                |s| -> <trigger macro pointer n>
//                 -

// - Default Map for ScanCode Lookup -
const nat_ptr_t *default_scanMap[] = {
default_tl_0x02, default_tl_0x03, default_tl_0x04, default_tl_0x05, default_tl_0x06, default_tl_0x07, default_tl_0x08, default_tl_0x09, default_tl_0x0A, default_tl_0x0B, default_tl_0x0C, default_tl_0x0D, default_tl_0x0E, default_tl_0x0F, default_tl_0x10, default_tl_0x11, default_tl_0x12, default_tl_0x13, default_tl_0x14, default_tl_0x15, default_tl_0x16, default_tl_0x17, default_tl_0x18, default_tl_0x19, default_tl_0x1A, default_tl_0x1B, default_tl_0x1C, default_tl_0x1D, default_tl_0x1E, default_tl_0x1F, default_tl_0x20, default_tl_0x21, default_tl_0x22, default_tl_0x23, default_tl_0x24, default_tl_0x25, default_tl_0x26, default_tl_0x27, default_tl_0x28, default_tl_0x29, default_tl_0x2A, default_tl_0x2B, default_tl_0x2C, default_tl_0x2D, default_tl_0x2E, default_tl_0x2F, default_tl_0x30, default_tl_0x31, default_tl_0x32, default_tl_0x33, default_tl_0x34, default_tl_0x35, default_tl_0x36, default_tl_0x37, default_tl_0x38, default_tl_0x39, default_tl_0x3A, default_tl_0x3B, default_tl_0x3C, default_tl_0x3D, default_tl_0x3E, default_tl_0x3F, default_tl_0x40, default_tl_0x41, default_tl_0x42, default_tl_0x43, default_tl_0x44, default_tl_0x45, default_tl_0x46, default_tl_0x47, default_tl_0x48, default_tl_0x49, default_tl_0x4A, default_tl_0x4B, default_tl_0x4C, default_tl_0x4D, default_tl_0x4E, default_tl_0x4F, default_tl_0x50, default_tl_0x51, default_tl_0x52, default_tl_0x53, default_tl_0x54, default_tl_0x55, default_tl_0x56, default_tl_0x57, default_tl_0x58, default_tl_0x59
};


// - Partial Layer ScanCode Lookup Maps -
// Partial Layer 1
const nat_ptr_t *layer1_scanMap[] = {
layer1_tl_0x02, layer1_tl_0x03, layer1_tl_0x04, layer1_tl_0x05, layer1_tl_0x06, layer1_tl_0x07, layer1_tl_0x08, layer1_tl_0x09, layer1_tl_0x0A, layer1_tl_0x0B, layer1_tl_0x0C, layer1_tl_0x0D, layer1_tl_0x0E, layer1_tl_0x0F, layer1_tl_0x10, layer1_tl_0x11, layer1_tl_0x12, layer1_tl_0x13, layer1_tl_0x14, layer1_tl_0x15, layer1_tl_0x16, layer1_tl_0x17, layer1_tl_0x18, layer1_tl_0x19, layer1_tl_0x1A, layer1_tl_0x1B, layer1_tl_0x1C, layer1_tl_0x1D, layer1_tl_0x1E, layer1_tl_0x1F, layer1_tl_0x20, layer1_tl_0x21, layer1_tl_0x22, layer1_tl_0x23, layer1_tl_0x24, layer1_tl_0x25, layer1_tl_0x26, layer1_tl_0x27, layer1_tl_0x28, layer1_tl_0x29, layer1_tl_0x2A, layer1_tl_0x2B, layer1_tl_0x2C, layer1_tl_0x2D, layer1_tl_0x2E, layer1_tl_0x2F, layer1_tl_0x30, layer1_tl_0x31, layer1_tl_0x32, layer1_tl_0x33, layer1_tl_0x34
};

// Partial Layer 2
const nat_ptr_t *layer2_scanMap[] = {
layer2_tl_0x08, layer2_tl_0x09, layer2_tl_0x0A, layer2_tl_0x0B, layer2_tl_0x0C, layer2_tl_0x0D, layer2_tl_0x0E, layer2_tl_0x0F, layer2_tl_0x10, layer2_tl_0x11, layer2_tl_0x12, layer2_tl_0x13, layer2_tl_0x14, layer2_tl_0x15, layer2_tl_0x16, layer2_tl_0x17, layer2_tl_0x18, layer2_tl_0x19, layer2_tl_0x1A, layer2_tl_0x1B, layer2_tl_0x1C, layer2_tl_0x1D, layer2_tl_0x1E, layer2_tl_0x1F, layer2_tl_0x20, layer2_tl_0x21, layer2_tl_0x22, layer2_tl_0x23, layer2_tl_0x24, layer2_tl_0x25, layer2_tl_0x26, layer2_tl_0x27, layer2_tl_0x28, layer2_tl_0x29, layer2_tl_0x2A, layer2_tl_0x2B, layer2_tl_0x2C, layer2_tl_0x2D, layer2_tl_0x2E, layer2_tl_0x2F, layer2_tl_0x30, layer2_tl_0x31, layer2_tl_0x32, layer2_tl_0x33, layer2_tl_0x34, layer2_tl_0x35, layer2_tl_0x36, layer2_tl_0x37, layer2_tl_0x38, layer2_tl_0x39, layer2_tl_0x3A, layer2_tl_0x3B, layer2_tl_0x3C, layer2_tl_0x3D, layer2_tl_0x3E, layer2_tl_0x3F, layer2_tl_0x40, layer2_tl_0x41, layer2_tl_0x42, layer2_tl_0x43, layer2_tl_0x44, layer2_tl_0x45, layer2_tl_0x46, layer2_tl_0x47, layer2_tl_0x48, layer2_tl_0x49, layer2_tl_0x4A, layer2_tl_0x4B, layer2_tl_0x4C, layer2_tl_0x4D, layer2_tl_0x4E, layer2_tl_0x4F, layer2_tl_0x50, layer2_tl_0x51, layer2_tl_0x52, layer2_tl_0x53, layer2_tl_0x54, layer2_tl_0x55, layer2_tl_0x56, layer2_tl_0x57, layer2_tl_0x58
};

// Partial Layer 3
const nat_ptr_t *layer3_scanMap[] = {
layer3_tl_0x3A, layer3_tl_0x3B, layer3_tl_0x3C, layer3_tl_0x3D, layer3_tl_0x3E, layer3_tl_0x3F, layer3_tl_0x40, layer3_tl_0x41, layer3_tl_0x42, layer3_tl_0x43, layer3_tl_0x44, layer3_tl_0x45, layer3_tl_0x46, layer3_tl_0x47, layer3_tl_0x48, layer3_tl_0x49, layer3_tl_0x4A, layer3_tl_0x4B, layer3_tl_0x4C, layer3_tl_0x4D, layer3_tl_0x4E, layer3_tl_0x4F, layer3_tl_0x50, layer3_tl_0x51, layer3_tl_0x52, layer3_tl_0x53, layer3_tl_0x54, layer3_tl_0x55
};

// Partial Layer 4
const nat_ptr_t *layer4_scanMap[] = {
layer4_tl_0x00
};

// Partial Layer 5
const nat_ptr_t *layer5_scanMap[] = {
layer5_tl_0x00
};

// Partial Layer 6
const nat_ptr_t *layer6_scanMap[] = {
layer6_tl_0x00
};

// Partial Layer 7
const nat_ptr_t *layer7_scanMap[] = {
layer7_tl_0x3A, layer7_tl_0x3B, layer7_tl_0x3C, layer7_tl_0x3D, layer7_tl_0x3E, layer7_tl_0x3F, layer7_tl_0x40, layer7_tl_0x41, layer7_tl_0x42, layer7_tl_0x43, layer7_tl_0x44, layer7_tl_0x45, layer7_tl_0x46, layer7_tl_0x47, layer7_tl_0x48, layer7_tl_0x49, layer7_tl_0x4A, layer7_tl_0x4B, layer7_tl_0x4C, layer7_tl_0x4D
};



// ----- Layer Index -----

// -- Layer Index List
//
// Index 0: Default map
// Index n: Additional layers
const Layer LayerIndex[] = {
	Layer_IN( default_scanMap, "D: MDErgo1 + lcdFuncMap", 0x02 ),
	Layer_IN( layer1_scanMap, "1: MDErgo1 + lcdFuncMap", 0x02 ),
	Layer_IN( layer2_scanMap, "2: MDErgo1 + lcdFuncMap", 0x08 ),
	Layer_IN( layer3_scanMap, "3: MDErgo1 + lcdFuncMap", 0x3A ),
	Layer_IN( layer4_scanMap, "4: lcdFuncMap", 0x00 ),
	Layer_IN( layer5_scanMap, "5: lcdFuncMap", 0x00 ),
	Layer_IN( layer6_scanMap, "6: lcdFuncMap", 0x00 ),
	Layer_IN( layer7_scanMap, "7: MDErgo1 + lcdFuncMap", 0x3A ),
};


// - Layer State
uint8_t LayerState[ LayerNum ];

