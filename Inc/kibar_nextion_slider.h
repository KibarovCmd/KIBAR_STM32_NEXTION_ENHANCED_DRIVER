/*
 * kibar_nextion_slider.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_SLIDER_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_SLIDER_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_SLIDER{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_slider_wid)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_hig)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_bco)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_bco1)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_pco)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_val)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_maxval)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_slider_minval)(struct KIBAR_NEXTION_SLIDER*, uint16_t);
};

typedef struct KIBAR_NEXTION_SLIDER* KIBAR_NEXTION_SLIDER_;

KIBAR_NEXTION_SLIDER_ NEW_KIBAR_NEXTION_SLIDER(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_slider_wid(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_hig(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_bco(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_bco1(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_pco(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_val(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_maxval(KIBAR_NEXTION_SLIDER_, uint16_t);
KIBAR_STATUS kibar_nextion_slider_minval(KIBAR_NEXTION_SLIDER_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_SLIDER_H_ */
