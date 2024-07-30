/*
 * kibar_ext_tools.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_EXT_TOOLS_H_
#define KIBAR_NEXTION_INC_KIBAR_EXT_TOOLS_H_

#include <stdint.h>

uint8_t kibar_size_integer_data_16_t(uint16_t);
uint8_t kibar_size_integer_data_32_t(uint32_t);
char* kibar_return_array_char_from_16_t(uint16_t);
char* kibar_return_array_char_from_32_t(uint32_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_EXT_TOOLS_H_ */
