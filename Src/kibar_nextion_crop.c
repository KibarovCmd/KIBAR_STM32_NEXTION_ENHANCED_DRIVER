/*
 * kibar_nextion_crop.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_crop.h>

KIBAR_NEXTION_CROP_ NEW_KIBAR_NEXTION_CROP(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_CROP_ kibar_nextion_crop = (KIBAR_NEXTION_CROP_)malloc(sizeof(struct KIBAR_NEXTION_CROP));
	kibar_nextion_crop->kibar_nextion = kibar_nextion_;
	kibar_nextion_crop->kibar_nextion_screen_name = screen_name;
	kibar_nextion_crop->kibar_nextion_tool_name = tool_name;
	kibar_nextion_crop->kibar_nextion_crop_picc = &kibar_nextion_crop_picc;
	return kibar_nextion_crop;
}

KIBAR_STATUS kibar_nextion_crop_picc(KIBAR_NEXTION_CROP_ kibar_nextion_crop, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_crop->kibar_nextion, kibar_nextion_crop->kibar_nextion_screen_name, kibar_nextion_crop->kibar_nextion_tool_name, "picc", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
