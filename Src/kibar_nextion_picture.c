/*
 * kibar_nextion_picture.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_picture.h>

KIBAR_NEXTION_PICTURE_ NEW_KIBAR_NEXTION_PICTURE(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_PICTURE_ kibar_nextion_picture = (KIBAR_NEXTION_PICTURE_)malloc(sizeof(struct KIBAR_NEXTION_PICTURE));
	kibar_nextion_picture->kibar_nextion = kibar_nextion_;
	kibar_nextion_picture->kibar_nextion_screen_name = screen_name;
	kibar_nextion_picture->kibar_nextion_tool_name = tool_name;
	kibar_nextion_picture->kibar_nextion_picture_pic = &kibar_nextion_picture_pic;
	return kibar_nextion_picture;
}

KIBAR_STATUS kibar_nextion_picture_pic(KIBAR_NEXTION_PICTURE_ kibar_nextion_picture, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_picture->kibar_nextion, kibar_nextion_picture->kibar_nextion_screen_name, kibar_nextion_picture->kibar_nextion_tool_name, "pic", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
