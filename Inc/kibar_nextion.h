/*
 * kibar_nextion.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_H_

#include <stm32f4xx_hal.h>
#include <stdlib.h>
#include <kibar_ext_tools.h>
#include <string.h>

#define KIBAR_NEXTION_ KIBAR_NEXTION*
#define KIBAR_TIMEOUT_ 50
#define KIBAR_IMPORTANT_DATA_SIZE_ 1
#define KIBAR_COLOR_LIMIT_ 65535
#define	KIBAR_CENTER_LIMIT_ 2
#define	KIBAR_PASSWORD_LIMIT_ 1
#define KIBAR_ISBR_LIMIT_ 1
#define KIBAR_DIRECTION_LIMIT_ 3
#define KIBAR_SCROLLING_DISTANCE_MIN_LIMIT_ 2
#define KIBAR_SCROLLING_DISTANCE_MAX_LIMIT_ 50
#define	KIBAR_SCROLLING_INTERVAL_TIME_MIN_LIMIT_ 80
#define KIBAR_SCROLLING_INTERVAL_TIME_MAX_LIMIT_ 65535
#define KIBAR_ENABLE_LIMIT_ 1
#define KIBAR_SPACING_LIMIT_ 255
#define KIBAR_NUMBER_LENGTH_LIMIT_ 15
#define KIBAR_FORMAT_LIMIT_ 2
#define	KIBAR_POINT_RIGHT_LIMIT_ 10
#define	KIBAR_POINT_LEFT_LIMIT_ 8
#define KIBAR_THICKNESS_LIMIT_ 20
#define KIBAR_GRID_SIZE_LIMIT_ 255
#define KIBAR_DATA_SCALING_MIN_LIMIT_ 10
#define KIBAR_DATA_SCALING_MAX_LIMIT_ 1000
#define KIBAR_SLIDER_WIDTH_HEIGHT_LIMIT_ 255
#define KIBAR_SLIDER_MIN_MAX_VAL_LIMIT_ 65535
#define KIBAR_TIMER_TIME_MAX_LIMIT_ 65535
#define KIBAR_TIMER_TIME_MIN_LIMIT_ 50
#define KIBAR_CHECKBOX_VAL_LIMIT_ 1
#define KIBAR_RADIO_VAL_LIMIT_ 1
#define KIBAR_DATA_SPAX_LIMIT_ 255
#define KIBAR_COLOR_BLACK 0
#define KIBAR_COLOR_BLUE 31
#define KIBAR_COLOR_BROWN 48192
#define KIBAR_COLOR_GREEN 2016
#define KIBAR_COLOR_YELLOW 65504
#define KIBAR_COLOR_RED 63488
#define KIBAR_COLOR_GRAY 33840
#define KIBAR_COLOR_WHITE 65535

typedef struct {
	UART_HandleTypeDef* kibar_uart_;
} KIBAR_NEXTION;

typedef enum {
	kibar_FALSE = 0,
	kibar_TRUE
} KIBAR_BOOLEAN;

typedef enum {
	kibar_OK = 0,
	kibar_ERROR
} KIBAR_STATUS;

KIBAR_NEXTION_ NEW_KIBAR_NEXTION(UART_HandleTypeDef*);
KIBAR_STATUS kibar_code_generator_data_16_t_(KIBAR_NEXTION_, char*, char*, char*, uint16_t);
KIBAR_STATUS kibar_code_generator_data_32_t_(KIBAR_NEXTION_, char*, char*, char*, uint32_t);
KIBAR_STATUS kibar_code_generator_data_text_(KIBAR_NEXTION_, char*, char*, char*, char*);
KIBAR_STATUS kibar_nextion_last_data(KIBAR_NEXTION_);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_H_ */
