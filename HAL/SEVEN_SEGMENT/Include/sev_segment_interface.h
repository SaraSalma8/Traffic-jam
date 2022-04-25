/*
 * sev_segment_interface.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

#ifndef HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_
#define HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_

#include "sev_segment_configuration.h"
#include"../../../LIB/STDTYPES.h"

/*
function name => SEV_SEGMENT_INIT
 Argument=> void
 Return=>void
 Description=> make port which seven segment connect with it OUTPUT
 Type=>Proto_Type
 */
void SEV_SEGMENT_INIT(void);

/*
function name => SEV_SEGMENT_DISPLAY_NUM
 Argument=> u8 number
 Return=>void
 Description=> Display number which enter by user
 Type=>Proto_Type
 */
void SEV_SEGMENT_DISPLAY_NUM(u8 number);


/*
function name => SEV_SEGMENT_COUNT_TOMAX
 Argument=> void
 Return=>void
 Description=> Display number from 0 to 9 with delay one second
 Type=>Proto_Type
 */
void SEV_SEGMENT_COUNT_TOMAX(void);

/*
function name => SEV_SEGMENT_COUNT_TONUM
 Argument=> u8 number
 Return=>void
 Description=> Display number from 0 to number enter by user with delay one second
 Type=>Proto_Type
 */
u8 SEV_SEGMENT_COUNT_TONUM(u8 number);

/*
function name => SEV_COM_INIT
 Argument=> u8 pin
 Return=>void
 Description=> to make common pin output
 Type=>Proto_Type
 */
void SEV_COM_INIT(u8 pin);


/*
function name => SEV_COM_ON
 Argument=> u8 pin
 Return=>void
 Description=> to make common pin high-> 5v
 Type=>Proto_Type
 */
void SEV_COM_ON(u8 PIN);
/*
function name => SEV_COM_OFF
 Argument=> u8 pin
 Return=>void
 Description=> to make common pin low-> 0v
 Type=>Proto_Type
 */
void SEV_COM_OFF(u8 PIN);
/*
function name => TWO_SEV_COUNT_NUM_ONEPORT
 Argument=> u8 number
 Return=>void
 Description=> to count number by two seven segment use one port
 Type=>Proto_Type
 */
void TWO_SEV_COUNT_NUM_ONEPORT(u8 number);

#endif /* HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_ */
