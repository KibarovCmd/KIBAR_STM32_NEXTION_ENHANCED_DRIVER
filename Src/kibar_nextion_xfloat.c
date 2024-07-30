/*
 * kibar_nextion_xfloat.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_xfloat.h>

KIBAR_NEXTION_XFLOAT_ NEW_KIBAR_NEXTION_XFLOAT(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat = (KIBAR_NEXTION_XFLOAT_)malloc(sizeof(struct KIBAR_NEXTION_XFLOAT));
    kibar_nextion_xfloat->kibar_nextion = kibar_nextion_;
    kibar_nextion_xfloat->kibar_nextion_screen_name = screen_name;
    kibar_nextion_xfloat->kibar_nextion_tool_name = tool_name;
    kibar_nextion_xfloat->kibar_nextion_xfloat_font = &kibar_nextion_xfloat_font;
    kibar_nextion_xfloat->kibar_nextion_xfloat_bco = &kibar_nextion_xfloat_bco;
    kibar_nextion_xfloat->kibar_nextion_xfloat_pco = &kibar_nextion_xfloat_pco;
    kibar_nextion_xfloat->kibar_nextion_xfloat_xcen = &kibar_nextion_xfloat_xcen;
    kibar_nextion_xfloat->kibar_nextion_xfloat_ycen = &kibar_nextion_xfloat_ycen;
    kibar_nextion_xfloat->kibar_nextion_xfloat_vvs0 = &kibar_nextion_xfloat_vvs0;
    kibar_nextion_xfloat->kibar_nextion_xfloat_vvs1 = &kibar_nextion_xfloat_vvs1;
    kibar_nextion_xfloat->kibar_nextion_xfloat_val = &kibar_nextion_xfloat_val;
    kibar_nextion_xfloat->kibar_nextion_xfloat_isbr = &kibar_nextion_xfloat_isbr;
    kibar_nextion_xfloat->kibar_nextion_xfloat_spax = &kibar_nextion_xfloat_spax;
    kibar_nextion_xfloat->kibar_nextion_xfloat_spay = &kibar_nextion_xfloat_spay;
    return kibar_nextion_xfloat;
}

KIBAR_STATUS kibar_nextion_xfloat_font(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "font", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_bco(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_pco(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_xcen(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "xcen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_ycen(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "ycen", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_val(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_vvs0(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_POINT_RIGHT_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "vvs0", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_vvs1(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_POINT_LEFT_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "vvs1", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_isbr(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_ISBR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "isbr", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_spax(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "spax", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_xfloat_spay(KIBAR_NEXTION_XFLOAT_ kibar_nextion_xfloat, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_xfloat->kibar_nextion, kibar_nextion_xfloat->kibar_nextion_screen_name, kibar_nextion_xfloat->kibar_nextion_tool_name, "spay", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
