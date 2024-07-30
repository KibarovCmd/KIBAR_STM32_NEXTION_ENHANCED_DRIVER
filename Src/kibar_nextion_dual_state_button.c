/*
 * kibar_nextion_dual_state_button.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_dual_state_button.h>

KIBAR_NEXTION_DUAL_STATE_BUTTON_ NEW_KIBAR_NEXTION_DUAL_STATE_BUTTON(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button = (KIBAR_NEXTION_DUAL_STATE_BUTTON_)malloc(sizeof(struct KIBAR_NEXTION_DUAL_STATE_BUTTON));
	kibar_nextion_dual_state_button->kibar_nextion = kibar_nextion_;
	kibar_nextion_dual_state_button->kibar_nextion_screen_name = screen_name;
	kibar_nextion_dual_state_button->kibar_nextion_tool_name = tool_name;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_font = &kibar_nextion_dual_state_button_font;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_bco = &kibar_nextion_dual_state_button_bco;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_bco2 = &kibar_nextion_dual_state_button_bco2;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_pco = &kibar_nextion_dual_state_button_pco;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_pco2 = &kibar_nextion_dual_state_button_pco2;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_xcen = &kibar_nextion_dual_state_button_xcen;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_ycen = &kibar_nextion_dual_state_button_ycen;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_val = &kibar_nextion_dual_state_button_val;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_txt = &kibar_nextion_dual_state_button_txt;
	kibar_nextion_dual_state_button->kibar_nextion_dual_state_button_isbr = &kibar_nextion_dual_state_button_isbr;
	return kibar_nextion_dual_state_button;
}

KIBAR_STATUS kibar_nextion_dual_state_button_font(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "font", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_bco(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_bco2(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "bco2", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_pco(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_pco2(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "pco2", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_xcen(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "xcen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_ycen(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "ycen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_val(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_txt(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, char* data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_text_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "txt", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_dual_state_button_isbr(KIBAR_NEXTION_DUAL_STATE_BUTTON_ kibar_nextion_dual_state_button, uint16_t data) {
	if(data > KIBAR_ISBR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_dual_state_button->kibar_nextion, kibar_nextion_dual_state_button->kibar_nextion_screen_name, kibar_nextion_dual_state_button->kibar_nextion_tool_name, "isbr", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
