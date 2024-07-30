/*
 * kibar_nextion_waveform.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_waveform.h>

KIBAR_NEXTION_WAVEFORM_ NEW_KIBAR_NEXTION_WAVEFORM(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name, char* waveform_id) {
	KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform = (KIBAR_NEXTION_WAVEFORM_)malloc(sizeof(struct KIBAR_NEXTION_WAVEFORM));
	kibar_nextion_waveform->kibar_nextion = kibar_nextion_;
	kibar_nextion_waveform->kibar_nextion_screen_name = screen_name;
	kibar_nextion_waveform->kibar_nextion_tool_name = tool_name;
	kibar_nextion_waveform->kibar_nextion_waveform_id = waveform_id;
	kibar_nextion_waveform->kibar_nextion_waveform_bco = &kibar_nextion_waveform_bco;
	kibar_nextion_waveform->kibar_nextion_waveform_gdc = &kibar_nextion_waveform_gdc;
	kibar_nextion_waveform->kibar_nextion_waveform_gdw = &kibar_nextion_waveform_gdw;
	kibar_nextion_waveform->kibar_nextion_waveform_gdh = &kibar_nextion_waveform_gdh;
	kibar_nextion_waveform->kibar_nextion_waveform_pco0 = &kibar_nextion_waveform_pco0;
	kibar_nextion_waveform->kibar_nextion_waveform_dis = &kibar_nextion_waveform_dis;
	kibar_nextion_waveform->kibar_nextion_waveform_add = &kibar_nextion_waveform_add;
	kibar_nextion_waveform->kibar_nextion_waveform_addt = &kibar_nextion_waveform_addt;
	kibar_nextion_waveform->kibar_nextion_waveform_cle = &kibar_nextion_waveform_cle;
	kibar_nextion_waveform->kibar_nextion_waveform_cle_all = &kibar_nextion_waveform_cle_all;
	return kibar_nextion_waveform;
}

KIBAR_STATUS kibar_nextion_waveform_bco(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "bco", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_gdc(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "gdc", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_gdw(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_GRID_SIZE_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "gdw", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_gdh(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_GRID_SIZE_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "gdh", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_pco0(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "pco0", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_dis(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t data) {
	if(data > KIBAR_DATA_SCALING_MAX_LIMIT_ || data < KIBAR_DATA_SCALING_MIN_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_waveform->kibar_nextion, kibar_nextion_waveform->kibar_nextion_screen_name, kibar_nextion_waveform->kibar_nextion_tool_name, "dis", data);
	if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_waveform_add(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t channel, uint16_t data) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*4] = {0x61, 0x64, 0x64, 0x20};
	uint8_t kibar_important_data_temp[KIBAR_IMPORTANT_DATA_SIZE_] = {0x2C};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data, KIBAR_IMPORTANT_DATA_SIZE_*4, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_nextion_waveform->kibar_nextion_waveform_id, strlen(kibar_nextion_waveform->kibar_nextion_waveform_id), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data_temp, KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(channel), kibar_size_integer_data_16_t(channel), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_five = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data_temp, KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_six = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(data), kibar_size_integer_data_16_t(data), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion_waveform->kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + hal_status_five + hal_status_six + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_nextion_waveform_addt(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t channel, uint16_t data) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*5] = {0x61, 0x64, 0x64, 0x74, 0x20};
	uint8_t kibar_important_data_temp[KIBAR_IMPORTANT_DATA_SIZE_] = {0x2C};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data, KIBAR_IMPORTANT_DATA_SIZE_*5, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_nextion_waveform->kibar_nextion_waveform_id, strlen(kibar_nextion_waveform->kibar_nextion_waveform_id), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data_temp, KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(channel), kibar_size_integer_data_16_t(channel), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_five = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data_temp, KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_six = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(data), kibar_size_integer_data_16_t(data), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion_waveform->kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + hal_status_five + hal_status_six + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_nextion_waveform_cle(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform, uint16_t channel) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*4] = {0x63, 0x6C, 0x65, 0x20};
	uint8_t kibar_important_data_temp[KIBAR_IMPORTANT_DATA_SIZE_] = {0x2C};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data, KIBAR_IMPORTANT_DATA_SIZE_*4, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_nextion_waveform->kibar_nextion_waveform_id, strlen(kibar_nextion_waveform->kibar_nextion_waveform_id), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, kibar_important_data_temp, KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion_waveform->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(channel), kibar_size_integer_data_16_t(channel), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion_waveform->kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_nextion_waveform_cle_all(KIBAR_NEXTION_WAVEFORM_ kibar_nextion_waveform) {
	return kibar_nextion_waveform_cle(kibar_nextion_waveform, 255);
}
