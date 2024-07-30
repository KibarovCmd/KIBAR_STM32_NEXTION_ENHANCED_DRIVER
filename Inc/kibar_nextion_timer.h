/*
 * kibar_nextion_timer.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_TIMER_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_TIMER_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_TIMER{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_timer_tim)(struct KIBAR_NEXTION_TIMER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_timer_en)(struct KIBAR_NEXTION_TIMER*, uint16_t);
};

typedef struct KIBAR_NEXTION_TIMER* KIBAR_NEXTION_TIMER_;

KIBAR_NEXTION_TIMER_ NEW_KIBAR_NEXTION_TIMER(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_timer_tim(KIBAR_NEXTION_TIMER_, uint16_t);
KIBAR_STATUS kibar_nextion_timer_en(KIBAR_NEXTION_TIMER_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_TIMER_H_ */
