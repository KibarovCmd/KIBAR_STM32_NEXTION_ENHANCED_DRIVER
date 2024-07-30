/*
 * kibar_nextion_check_box.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_CHECK_BOX_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_CHECK_BOX_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_CHECKBOX{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_checkbox_bco)(struct KIBAR_NEXTION_CHECKBOX*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_checkbox_pco)(struct KIBAR_NEXTION_CHECKBOX*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_checkbox_val)(struct KIBAR_NEXTION_CHECKBOX*, uint16_t);
};

typedef struct KIBAR_NEXTION_CHECKBOX* KIBAR_NEXTION_CHECKBOX_;

KIBAR_NEXTION_CHECKBOX_ NEW_KIBAR_NEXTION_CHECKBOX(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_checkbox_bco(KIBAR_NEXTION_CHECKBOX_, uint16_t);
KIBAR_STATUS kibar_nextion_checkbox_pco(KIBAR_NEXTION_CHECKBOX_, uint16_t);
KIBAR_STATUS kibar_nextion_checkbox_val(KIBAR_NEXTION_CHECKBOX_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_CHECK_BOX_H_ */
