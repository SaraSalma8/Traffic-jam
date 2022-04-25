/*
 * main.c
 *
 *  Created on: Apr 19, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/19/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: Simple Traffic_Sign                      ***************
 * ********************************************************************************
 */
/* ->I used 2 Seven Segment common Anode
->Red--->15seconds
->yellow--->5seconds
->green--->10seconds
->two seven segment connect with PORTA
->common seven segment one connect PIN ONE->0 PORTC
->common seven segment two connect PIN TWO->1 PORTC
->RED led connect with pin one-> 0 in PORTB
->GREEN led connect with pin TWO-> 1 in PORTB
->YELLOW led connect with pin THREE-> 2 in PORTB
*/
/* include avr lib to can use ports */
#include<avr/io.h>
/*include lib to can use delay*/
#include<util/delay.h>
/*include file have some values i need */
#include"../LIB/DEFINE.h"
#include"../LIB/STDTYPES.h"

/*include driver seven segment*/
#include"../HAL/SEVEN_SEGMENT/Include/sev_segment_interface.h"
/*include driver led */
#include"../HAL/LED/Include/led_interface.h"






void main(void){
	u8 check= ZERO;

	/*make port seven segment direction ->output*/
	SEV_SEGMENT_INIT();
	/*make pins seven segment direction ->output*/
	SEV_COM_INIT(SEV_SEGMENT_ONE_COM);
	SEV_COM_INIT(SEV_SEGMENT_TWO_COM);

	/*make pins leds ->output */
	LED_INIT(RED_LED);
	LED_INIT(YELLOW_LED);
	LED_INIT(GREEN_LED);

	while(1){


	/*	SEV_COM_ON(SEV_SEGMENT_ONE_COM);
		SEV_SEGMENT_DISPLAY_NUM(ZERO);
		_delay_ms(WAIT);
		SEV_COM_OFF(SEV_SEGMENT_ONE_COM);
		SEV_COM_ON(SEV_SEGMENT_TWO_COM);
		SEV_SEGMENT_COUNT_TOMAX();
		SEV_COM_OFF(SEV_SEGMENT_TWO_COM);

		SEV_COM_ON(SEV_SEGMENT_ONE_COM);
		SEV_SEGMENT_DISPLAY_NUM(ONE);
		_delay_ms(WAIT);
		SEV_COM_OFF(SEV_SEGMENT_ONE_COM);
		SEV_COM_ON(SEV_SEGMENT_TWO_COM);
		check = SEV_SEGMENT_COUNT_TONUM(FIVE);
*/
	/*make red led on for 15 second and seven segment counter from 0 to 15*/
		/* make red led on */
			LED_ON(RED_LED);
		/* count from 0 to 15 on seven segment */
			TWO_SEV_COUNT_NUM_ONEPORT(TIME1);
		/* make red led off */
		     LED_OFF(RED_LED);


	 /*make green led on for 10 second and seven segment counter from 0 to 10*/
		   /* make green led on */
		     	LED_ON(GREEN_LED);
		   /* count from 0 to 10 on seven segment */
		     	TWO_SEV_COUNT_NUM_ONEPORT(TIME2);
		   /* make green led off */
		        LED_OFF(GREEN_LED);

    /*make yellow led on for 5 second and seven segment counter from 0 to 5*/
		    /* make green led on */
		       	LED_ON(YELLOW_LED);
		    /* count from 0 to 10 on seven segment */
		      	TWO_SEV_COUNT_NUM_ONEPORT(TIME3);
		    /* make green led off */
		         LED_OFF(YELLOW_LED);
	}







}


















