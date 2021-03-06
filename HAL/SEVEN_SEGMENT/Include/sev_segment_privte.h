/*
 * sev_segmemt_privte.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

#ifndef HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_PRIVTE_H_
#define HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_PRIVTE_H_


/* define PORTS (A-B-C-D) */
#define GROUP_1  1
#define GROUP_2  2
#define GROUP_3  3
#define GROUP_4  4

/* Numbers Macros */
#define ZERO_Anode   0xC0
#define ONE_Anode    0xF9
#define TWO_Anode    0xA4
#define THREE_Anode  0xB0
#define FOUR_Anode   0x99
#define FIVE_Anode   0x92
#define SIX_Anode    0x82
#define SEVEN_Anode  0xF8
#define EIGHT_Anode  0x80
#define NINE_Anode   0x90

/* define PINS (0-1-2-3-4-5-6-7) */

#define PIN_ONE    0
#define PIN_TWO    1
#define PIN_THREE  2
#define PIN_FOUR   3
#define PIN_FIVE   4
#define PIN_SIX    5
#define PIN_SEVEN  6
#define PIN_EIGHT  7

/*Some Value */
#define SEV_MAX_NUMS 10
#define LOOP_START 0
#define  MAX_NUM_TWO_SEV  99

#endif /* HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_PRIVTE_H_ */
