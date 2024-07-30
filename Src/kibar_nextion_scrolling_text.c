/*
 * kibar_nextion_scrolling_text.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_scrolling_text.h>

KIBAR_NEXTION_SCROLLING_TEXT_ NEW_KIBAR_NEXTION_SCROLLING_TEXT(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text = (KIBAR_NEXTION_SCROLLING_TEXT_)malloc(sizeof(struct KIBAR_NEXTION_SCROLLING_TEXT));
    kibar_nextion_scrolling_text->kibar_nextion = kibar_nextion_;
    kibar_nextion_scrolling_text->kibar_nextion_screen_name = screen_name;
    kibar_nextion_scrolling_text->kibar_nextion_tool_name = tool_name;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_font = &kibar_nextion_scrolling_text_font;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_bco = &kibar_nextion_scrolling_text_bco;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_pco = &kibar_nextion_scrolling_text_pco;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_xcen = &kibar_nextion_scrolling_text_xcen;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_ycen = &kibar_nextion_scrolling_text_ycen;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_dir = &kibar_nextion_scrolling_text_dir;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_dis = &kibar_nextion_scrolling_text_dis;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_tim = &kibar_nextion_scrolling_text_tim;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_en = &kibar_nextion_scrolling_text_en;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_txt = &kibar_nextion_scrolling_text_txt;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_isbr = &kibar_nextion_scrolling_text_isbr;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_spax = &kibar_nextion_scrolling_text_spax;
    kibar_nextion_scrolling_text->kibar_nextion_scrolling_text_spay = &kibar_nextion_scrolling_text_spay;
    return kibar_nextion_scrolling_text;
}

KIBAR_STATUS kibar_nextion_scrolling_text_font(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "font", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_bco(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
    KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "bco", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_pco(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
    KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "pco", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_xcen(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
    KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "xcen", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_ycen(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_CENTER_LIMIT_) return kibar_FALSE;
    KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "ycen", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_dir(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_DIRECTION_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "dir", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_dis(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_SCROLLING_DISTANCE_MAX_LIMIT_ || data < KIBAR_SCROLLING_DISTANCE_MIN_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "dis", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_tim(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_SCROLLING_INTERVAL_TIME_MAX_LIMIT_ || data < KIBAR_SCROLLING_INTERVAL_TIME_MIN_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "tim", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_en(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_ENABLE_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "en", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_txt(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, char* data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_text_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "txt", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_isbr(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_ISBR_LIMIT_) return kibar_FALSE;
    KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "isbr", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_spax(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "spax", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_scrolling_text_spay(KIBAR_NEXTION_SCROLLING_TEXT_ kibar_nextion_scrolling_text, uint16_t data) {
	if(data > KIBAR_SPACING_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_scrolling_text->kibar_nextion, kibar_nextion_scrolling_text->kibar_nextion_screen_name, kibar_nextion_scrolling_text->kibar_nextion_tool_name, "spay", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
