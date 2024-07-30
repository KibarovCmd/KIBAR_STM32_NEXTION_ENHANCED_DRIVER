/*
 * kibar_nextion_text.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_TEXT_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_TEXT_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_TEXT{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_text_font)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_bco)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_pco)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_xcen)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_ycen)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_pw)(struct KIBAR_NEXTION_TEXT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_text_txt)(struct KIBAR_NEXTION_TEXT*, char*);
	KIBAR_STATUS (*kibar_nextion_text_isbr)(struct KIBAR_NEXTION_TEXT*, uint16_t);
};

typedef struct KIBAR_NEXTION_TEXT* KIBAR_NEXTION_TEXT_;

KIBAR_NEXTION_TEXT_ NEW_KIBAR_NEXTION_TEXT(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_text_font(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_bco(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_pco(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_xcen(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_ycen(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_pw(KIBAR_NEXTION_TEXT_, uint16_t);
KIBAR_STATUS kibar_nextion_text_txt(KIBAR_NEXTION_TEXT_, char*);
KIBAR_STATUS kibar_nextion_text_isbr(KIBAR_NEXTION_TEXT_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_TEXT_H_ */
