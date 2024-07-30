/*
 * kibar_nextion_variable.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_VARIABLE_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_VARIABLE_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_VARIABLE{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_variable_val)(struct KIBAR_NEXTION_VARIABLE*, uint16_t);
};

typedef struct KIBAR_NEXTION_VARIABLE* KIBAR_NEXTION_VARIABLE_;

KIBAR_NEXTION_VARIABLE_ NEW_KIBAR_NEXTION_VARIABLE(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_variable_val(KIBAR_NEXTION_VARIABLE_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_VARIABLE_H_ */
