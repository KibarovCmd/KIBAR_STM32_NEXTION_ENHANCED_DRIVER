/*
 * kibar_nextion_qrcode.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_qrcode.h>

KIBAR_NEXTION_QRCODE_ NEW_KIBAR_NEXTION_DUAL_QRCODE(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_QRCODE_ kibar_nextion_qrcode = (KIBAR_NEXTION_QRCODE_)malloc(sizeof(struct KIBAR_NEXTION_QRCODE));
	kibar_nextion_qrcode->kibar_nextion = kibar_nextion_;
	kibar_nextion_qrcode->kibar_nextion_screen_name = screen_name;
	kibar_nextion_qrcode->kibar_nextion_tool_name = tool_name;
	kibar_nextion_qrcode->kibar_nextion_qrcode_dis = &kibar_nextion_qrcode_dis;
	kibar_nextion_qrcode->kibar_nextion_qrcode_bco = &kibar_nextion_qrcode_bco;
	kibar_nextion_qrcode->kibar_nextion_qrcode_pco = &kibar_nextion_qrcode_pco;
	kibar_nextion_qrcode->kibar_nextion_qrcode_txt = &kibar_nextion_qrcode_txt;
	return kibar_nextion_qrcode;
}

KIBAR_STATUS kibar_nextion_qrcode_dis(KIBAR_NEXTION_QRCODE_ kibar_nextion_qrcode, uint16_t data) {
	if(data > KIBAR_DATA_SPAX_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_qrcode->kibar_nextion, kibar_nextion_qrcode->kibar_nextion_screen_name, kibar_nextion_qrcode->kibar_nextion_tool_name, "dis", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_qrcode_bco(KIBAR_NEXTION_QRCODE_ kibar_nextion_qrcode, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_qrcode->kibar_nextion, kibar_nextion_qrcode->kibar_nextion_screen_name, kibar_nextion_qrcode->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_qrcode_pco(KIBAR_NEXTION_QRCODE_ kibar_nextion_qrcode, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_qrcode->kibar_nextion, kibar_nextion_qrcode->kibar_nextion_screen_name, kibar_nextion_qrcode->kibar_nextion_tool_name, "pco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_qrcode_txt(KIBAR_NEXTION_QRCODE_ kibar_nextion_qrcode, char* data) {
	KIBAR_STATUS kibar_status = kibar_code_generator_data_text_(kibar_nextion_qrcode->kibar_nextion, kibar_nextion_qrcode->kibar_nextion_screen_name, kibar_nextion_qrcode->kibar_nextion_tool_name, "txt", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}
