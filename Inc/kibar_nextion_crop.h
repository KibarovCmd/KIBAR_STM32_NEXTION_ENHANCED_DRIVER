/*
 * kibar_nextion_crop.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_CROP_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_CROP_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_CROP{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_crop_picc)(struct KIBAR_NEXTION_CROP*, uint16_t);
};

typedef struct KIBAR_NEXTION_CROP* KIBAR_NEXTION_CROP_;

KIBAR_NEXTION_CROP_ NEW_KIBAR_NEXTION_CROP(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_crop_picc(KIBAR_NEXTION_CROP_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_CROP_H_ */
