/*
 * kibar_nextion_picture.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_PICTURE_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_PICTURE_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_PICTURE{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_picture_pic)(struct KIBAR_NEXTION_PICTURE*, uint16_t);
};

typedef struct KIBAR_NEXTION_PICTURE* KIBAR_NEXTION_PICTURE_;

KIBAR_NEXTION_PICTURE_ NEW_KIBAR_NEXTION_PICTURE(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_picture_pic(KIBAR_NEXTION_PICTURE_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_PICTURE_H_ */
