/*
 * kibar_nextion_progress_bar.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_progress_bar.h>

KIBAR_NEXTION_PROGRESS_BAR_ NEW_KIBAR_NEXTION_PROGRESS_BAR(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_PROGRESS_BAR_ kibar_nextion_progress_bar = (KIBAR_NEXTION_PROGRESS_BAR_)malloc(sizeof(struct KIBAR_NEXTION_PROGRESS_BAR));
	kibar_nextion_progress_bar->kibar_nextion = kibar_nextion_;
	kibar_nextion_progress_bar->kibar_nextion_screen_name = screen_name;
	kibar_nextion_progress_bar->kibar_nextion_tool_name = tool_name;
	kibar_nextion_progress_bar->kibar_nextion_progress_bar_val = &kibar_nextion_progress_bar_val;
	kibar_nextion_progress_bar->kibar_nextion_progress_bar_bco = &kibar_nextion_progress_bar_bco;
	kibar_nextion_progress_bar->kibar_nextion_progress_bar_pco = &kibar_nextion_progress_bar_pco;
	return kibar_nextion_progress_bar;
}

KIBAR_STATUS kibar_nextion_progress_bar_val(KIBAR_NEXTION_PROGRESS_BAR_ kibar_nextion_progress_bar, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_progress_bar->kibar_nextion, kibar_nextion_progress_bar->kibar_nextion_screen_name, kibar_nextion_progress_bar->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_progress_bar_bco(KIBAR_NEXTION_PROGRESS_BAR_ kibar_nextion_progress_bar, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_progress_bar->kibar_nextion, kibar_nextion_progress_bar->kibar_nextion_screen_name, kibar_nextion_progress_bar->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_progress_bar_pco(KIBAR_NEXTION_PROGRESS_BAR_ kibar_nextion_progress_bar, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_progress_bar->kibar_nextion, kibar_nextion_progress_bar->kibar_nextion_screen_name, kibar_nextion_progress_bar->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
