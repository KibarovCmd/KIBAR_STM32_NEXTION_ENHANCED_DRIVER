/*
 * kibar_nextion_number.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_number.h>

KIBAR_NEXTION_NUMBER_ NEW_KIBAR_NEXTION_NUMBER(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_NUMBER_ kibar_nextion_number = (KIBAR_NEXTION_NUMBER_)malloc(sizeof(struct KIBAR_NEXTION_NUMBER));
	kibar_nextion_number->kibar_nextion = kibar_nextion_;
	kibar_nextion_number->kibar_nextion_screen_name = screen_name;
	kibar_nextion_number->kibar_nextion_tool_name = tool_name;
	kibar_nextion_number->kibar_nextion_number_font = &kibar_nextion_number_font;
	kibar_nextion_number->kibar_nextion_number_bco = &kibar_nextion_number_bco;
	kibar_nextion_number->kibar_nextion_number_pco = &kibar_nextion_number_pco;
	kibar_nextion_number->kibar_nextion_number_xcen = &kibar_nextion_number_xcen;
	kibar_nextion_number->kibar_nextion_number_ycen = &kibar_nextion_number_ycen;
	kibar_nextion_number->kibar_nextion_number_val = &kibar_nextion_number_val;
	kibar_nextion_number->kibar_nextion_number_length = &kibar_nextion_number_length;
	kibar_nextion_number->kibar_nextion_number_format = &kibar_nextion_number_format;
	kibar_nextion_number->kibar_nextion_number_isbr = &kibar_nextion_number_isbr;
	kibar_nextion_number->kibar_nextion_number_spax = &kibar_nextion_number_spax;
	kibar_nextion_number->kibar_nextion_number_spay = &kibar_nextion_number_spay;
	return kibar_nextion_number;
}

KIBAR_STATUS kibar_nextion_number_font(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "font", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_bco(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_pco(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_xcen(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "xcen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_ycen(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "ycen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_val(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_length(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_NUMBER_LENGTH_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "length", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_format(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_FORMAT_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "format", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_isbr(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_ISBR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "isbr", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_spax(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "spax", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_number_spay(KIBAR_NEXTION_NUMBER_ kibar_nextion_number, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_number->kibar_nextion, kibar_nextion_number->kibar_nextion_screen_name, kibar_nextion_number->kibar_nextion_tool_name, "spay", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
