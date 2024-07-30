/*
 * kibar_nextion_variable.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_variable.h>

KIBAR_NEXTION_VARIABLE_ NEW_KIBAR_NEXTION_VARIABLE(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_VARIABLE_ kibar_nextion_variable = (KIBAR_NEXTION_VARIABLE_)malloc(sizeof(struct KIBAR_NEXTION_VARIABLE));
    kibar_nextion_variable->kibar_nextion = kibar_nextion_;
    kibar_nextion_variable->kibar_nextion_screen_name = screen_name;
    kibar_nextion_variable->kibar_nextion_tool_name = tool_name;
    kibar_nextion_variable->kibar_nextion_variable_val = &kibar_nextion_variable_val;
    return kibar_nextion_variable;
}

KIBAR_STATUS kibar_nextion_variable_val(KIBAR_NEXTION_VARIABLE_ kibar_nextion_variable, uint16_t data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_32_t_(kibar_nextion_variable->kibar_nextion, kibar_nextion_variable->kibar_nextion_screen_name, kibar_nextion_variable->kibar_nextion_tool_name, "val", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
