/*
 * kibar_nextion_page.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_page.h>

KIBAR_NEXTION_PAGE_ NEW_KIBAR_NEXTION_PAGE(KIBAR_NEXTION_ kibar_nextion_, char* screen_name) {
	KIBAR_NEXTION_PAGE_ kibar_nextion_page = (KIBAR_NEXTION_PAGE_)malloc(sizeof(struct KIBAR_NEXTION_PAGE));
	kibar_nextion_page->kibar_nextion = kibar_nextion_;
	kibar_nextion_page->kibar_nextion_screen_name = screen_name;
	kibar_nextion_page->kibar_nextion_page_bco = &kibar_nextion_page_bco;
	return kibar_nextion_page;
}

KIBAR_STATUS kibar_nextion_page_bco(KIBAR_NEXTION_PAGE_ kibar_nextion_, uint16_t data) {
	if(data > KIBAR_COLOR_LIMIT_) return kibar_FALSE;
	uint8_t kibar_important_data[KIBAR_IMPORTANT_DATA_SIZE_*5] = {0x2E, 0x62, 0x63, 0x6F, 0x3D};
	HAL_StatusTypeDef hal_status_one = HAL_UART_Transmit(kibar_nextion_->kibar_nextion->kibar_uart_, (uint8_t*)kibar_nextion_->kibar_nextion_screen_name, strlen(kibar_nextion_->kibar_nextion_screen_name), KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_two = HAL_UART_Transmit(kibar_nextion_->kibar_nextion->kibar_uart_, kibar_important_data, KIBAR_IMPORTANT_DATA_SIZE_*5, KIBAR_TIMEOUT_);
	HAL_StatusTypeDef hal_status_three = HAL_UART_Transmit(kibar_nextion_->kibar_nextion->kibar_uart_, (uint8_t*)kibar_return_array_char_from_16_t(data), kibar_size_integer_data_16_t(data), KIBAR_TIMEOUT_);
	KIBAR_STATUS kibar_status_one = kibar_nextion_last_data(kibar_nextion_->kibar_nextion);
	if(hal_status_one + hal_status_two + hal_status_three + kibar_status_one == (uint8_t)kibar_FALSE) return kibar_OK;
	else return kibar_FALSE;
}

