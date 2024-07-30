/*
 * kibar_nextion_gauge.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_gauge.h>

KIBAR_NEXTION_GAUGE_ NEW_KIBAR_NEXTION_GAUGE(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_GAUGE_ kibar_nextion_gauge = (KIBAR_NEXTION_GAUGE_)malloc(sizeof(struct KIBAR_NEXTION_GAUGE));
	kibar_nextion_gauge->kibar_nextion = kibar_nextion_;
	kibar_nextion_gauge->kibar_nextion_screen_name = screen_name;
	kibar_nextion_gauge->kibar_nextion_tool_name = tool_name;
	kibar_nextion_gauge->kibar_nextion_gauge_bco = &kibar_nextion_gauge_bco;
	kibar_nextion_gauge->kibar_nextion_gauge_val = &kibar_nextion_gauge_val;
	kibar_nextion_gauge->kibar_nextion_gauge_pco = &kibar_nextion_gauge_pco;
	kibar_nextion_gauge->kibar_nextion_gauge_wid = &kibar_nextion_gauge_wid;
	return kibar_nextion_gauge;
}

KIBAR_STATUS kibar_nextion_gauge_bco(KIBAR_NEXTION_GAUGE_ kibar_nextion_gauge, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_gauge->kibar_nextion, kibar_nextion_gauge->kibar_nextion_screen_name, kibar_nextion_gauge->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_gauge_val(KIBAR_NEXTION_GAUGE_ kibar_nextion_gauge, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_gauge->kibar_nextion, kibar_nextion_gauge->kibar_nextion_screen_name, kibar_nextion_gauge->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_gauge_pco(KIBAR_NEXTION_GAUGE_ kibar_nextion_gauge, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_text_(kibar_nextion_gauge->kibar_nextion, kibar_nextion_gauge->kibar_nextion_screen_name, kibar_nextion_gauge->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_gauge_wid(KIBAR_NEXTION_GAUGE_ kibar_nextion_gauge, uint16_t data) {
	if(data > KIBAR_THICKNESS_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_text_(kibar_nextion_gauge->kibar_nextion, kibar_nextion_gauge->kibar_nextion_screen_name, kibar_nextion_gauge->kibar_nextion_tool_name, "wid", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
