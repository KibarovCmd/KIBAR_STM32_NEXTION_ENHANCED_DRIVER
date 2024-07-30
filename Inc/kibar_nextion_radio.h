/*
 * kibar_nextion_radio.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_RADIO_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_RADIO_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_RADIO{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_radio_bco)(struct KIBAR_NEXTION_RADIO*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_radio_pco)(struct KIBAR_NEXTION_RADIO*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_radio_val)(struct KIBAR_NEXTION_RADIO*, uint16_t);
};

typedef struct KIBAR_NEXTION_RADIO* KIBAR_NEXTION_RADIO_;

KIBAR_NEXTION_RADIO_ NEW_KIBAR_NEXTION_RADIO(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_radio_bco(KIBAR_NEXTION_RADIO_, uint16_t);
KIBAR_STATUS kibar_nextion_radio_pco(KIBAR_NEXTION_RADIO_, uint16_t);
KIBAR_STATUS kibar_nextion_radio_val(KIBAR_NEXTION_RADIO_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_RADIO_H_ */
