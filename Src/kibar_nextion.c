/*
 * kibar_nextion.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion.h>

KIBAR_NEXTION_ NEW_KIBAR_NEXTION(UART_HandleTypeDef* kibar_uart) {
	KIBAR_NEXTION* kibar_nextion = (KIBAR_NEXTION*)malloc(sizeof(KIBAR_NEXTION));
	kibar_nextion->kibar_uart_ = kibar_uart;
	return kibar_nextion;
}

KIBAR_STATUS kibar_code_generator_data_16_t_(KIBAR_NEXTION_ kibar_nextion, char* screen_name, char* tool_name, char* attribute_name, uint16_t data) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*2] = {0x2E, 0x3D};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)screen_name, strlen(screen_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)tool_name, strlen(tool_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_five = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)attribute_name, strlen(attribute_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_six = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[1], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_seven = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(data), kibar_size_integer_data_16_t(data), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + hal_status_five + hal_status_six + hal_status_seven + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_code_generator_data_32_t_(KIBAR_NEXTION_ kibar_nextion, char* screen_name, char* tool_name, char* attribute_name, uint32_t data) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*2] = {0x2E, 0x3D};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)screen_name, strlen(screen_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)tool_name, strlen(tool_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_five = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)attribute_name, strlen(attribute_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_six = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[1], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_seven = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_32_t(data), kibar_size_integer_data_32_t(data), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + hal_status_five + hal_status_six + hal_status_seven + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_code_generator_data_text_(KIBAR_NEXTION_ kibar_nextion, char* screen_name, char* tool_name, char* attribute_name, char* data) {
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*3] = {0x2E, 0x3D, 0x22};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)screen_name, strlen(screen_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)tool_name, strlen(tool_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_four = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[0], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_five = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)attribute_name, strlen(attribute_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_six = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[1], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_seven = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[2], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_eight = HAL_UART_Transmit(kibar_nextion->kibar_uart_, (uint8_t*)data, strlen(data), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_nine = HAL_UART_Transmit(kibar_nextion->kibar_uart_, &kibar_important_data[2], KIBAR_IMPORTANT_DATA_SIZE_, KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + hal_status_four + hal_status_five + hal_status_six + hal_status_seven + hal_status_eight + hal_status_nine + kibar_status_one == kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

KIBAR_STATUS kibar_nextion_last_data(KIBAR_NEXTION_ kibar_nextion) {
	uint8_t last_data[3] = {255, 255, 255};
	if(HAL_UART_Transmit(kibar_nextion->kibar_uart_, last_data, 3, KIBAR_TIMEOUT_) == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_ERROR;
}

