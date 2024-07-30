/*
 * kibar_nextion_slider.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_slider.h>

KIBAR_NEXTION_SLIDER_ NEW_KIBAR_NEXTION_SLIDER(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_SLIDER_ kibar_nextion_slider = (KIBAR_NEXTION_SLIDER_)malloc(sizeof(struct KIBAR_NEXTION_SLIDER));
    kibar_nextion_slider->kibar_nextion = kibar_nextion_;
    kibar_nextion_slider->kibar_nextion_screen_name = screen_name;
    kibar_nextion_slider->kibar_nextion_tool_name = tool_name;
    kibar_nextion_slider->kibar_nextion_slider_wid = &kibar_nextion_slider_wid;
    kibar_nextion_slider->kibar_nextion_slider_hig = &kibar_nextion_slider_hig;
    kibar_nextion_slider->kibar_nextion_slider_bco = &kibar_nextion_slider_bco;
    kibar_nextion_slider->kibar_nextion_slider_bco1 = &kibar_nextion_slider_bco1;
    kibar_nextion_slider->kibar_nextion_slider_pco = &kibar_nextion_slider_pco;
    kibar_nextion_slider->kibar_nextion_slider_val = &kibar_nextion_slider_val;
    kibar_nextion_slider->kibar_nextion_slider_maxval = &kibar_nextion_slider_maxval;
    kibar_nextion_slider->kibar_nextion_slider_minval = &kibar_nextion_slider_minval;
    return kibar_nextion_slider;
}

KIBAR_STATUS kibar_nextion_slider_wid(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_SLIDER_WIDTH_HEIGHT_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "wid", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_hig(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_SLIDER_WIDTH_HEIGHT_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "hig", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_bco(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "bco", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_bco1(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "bco1", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_pco(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "pco", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_val(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "val", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_maxval(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_TIMER_TIME_MAX_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "maxval", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_slider_minval(KIBAR_NEXTION_SLIDER_ kibar_nextion_slider, uint16_t data) {
	if(data > KIBAR_TIMER_TIME_MIN_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_slider->kibar_nextion, kibar_nextion_slider->kibar_nextion_screen_name, kibar_nextion_slider->kibar_nextion_tool_name, "minval", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}
