/*
 * kibar_nextion_button.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_BUTTON_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_BUTTON_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_BUTTON{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_button_font)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_bco)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_bco2)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_pco)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_pco2)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_xcen)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_ycen)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_button_txt)(struct KIBAR_NEXTION_BUTTON*, char*);
	KIBAR_STATUS (*kibar_nextion_button_isbr)(struct KIBAR_NEXTION_BUTTON*, uint16_t);
};

typedef struct KIBAR_NEXTION_BUTTON* KIBAR_NEXTION_BUTTON_;

KIBAR_NEXTION_BUTTON_ NEW_KIBAR_NEXTION_BUTTON(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_button_font(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_bco(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_bco2(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_pco(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_pco2(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_xcen(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_ycen(KIBAR_NEXTION_BUTTON_, uint16_t);
KIBAR_STATUS kibar_nextion_button_txt(KIBAR_NEXTION_BUTTON_, char*);
KIBAR_STATUS kibar_nextion_button_isbr(KIBAR_NEXTION_BUTTON_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_BUTTON_H_ */
