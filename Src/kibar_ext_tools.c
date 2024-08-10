/*
 * kibar_ext_tools.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_ext_tools.h>

static char* kibar_reverse_array_(char* data_array, uint16_t data_size) {
	char* temp_array = (char*)malloc(sizeof(char) * data_size);
	for(int i = 0, j = data_size - 1; i < data_size; i++, j--) temp_array[i] = data_array[j];
	free(data_array);
	return temp_array;
}

uint8_t kibar_size_integer_data_16_t(uint16_t kibar_data) {
	uint8_t temp_index = 0;
	while(kibar_data != 0) {
		temp_index++;
		kibar_data /= 10;
	}
	return temp_index;
}

uint8_t kibar_size_integer_data_32_t(uint32_t kibar_data) {
	uint8_t temp_index = 0;
	while(kibar_data != 0) {
		temp_index++;
		kibar_data /= 10;
	}
	return temp_index;
}

char* kibar_return_array_char_from_16_t(uint16_t kibar_data) {
	uint8_t temp_index = kibar_size_integer_data_16_t(kibar_data);
	char* array = (char*)malloc(sizeof(char) * temp_index);
	for(int i = 0; i < temp_index; i++) {
		array[i] = 48 + kibar_data % 10;
		kibar_data /= 10;
	}
	return kibar_reverse_array_(array, temp_index);
}


char* kibar_return_array_char_from_32_t(uint32_t kibar_data) {
	uint8_t temp_index = kibar_size_integer_data_32_t(kibar_data);
	char* array = (char*)malloc(sizeof(char) * temp_index);
	for(int i = 0; i < temp_index; i++) {
		array[i] = 48 + kibar_data % 10;
		kibar_data /= 10;
	}
	return kibar_reverse_array_(array, temp_index);
}

