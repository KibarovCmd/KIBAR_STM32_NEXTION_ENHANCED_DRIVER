/*
 * kibar_nextion_timer.c
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#include <kibar_nextion_timer.h>

KIBAR_NEXTION_TIMER_ NEW_KIBAR_NEXTION_TIMER(KIBAR_NEXTION_ kibar_nextion_, char* screen_name, char* tool_name) {
	KIBAR_NEXTION_TIMER_ kibar_nextion_timer = (KIBAR_NEXTION_TIMER_)malloc(sizeof(struct KIBAR_NEXTION_TIMER));
    kibar_nextion_timer->kibar_nextion = kibar_nextion_;
    kibar_nextion_timer->kibar_nextion_screen_name = screen_name;
    kibar_nextion_timer->kibar_nextion_tool_name = tool_name;
    kibar_nextion_timer->kibar_nextion_timer_tim = &kibar_nextion_timer_tim;
    kibar_nextion_timer->kibar_nextion_timer_en = &kibar_nextion_timer_en;
    return kibar_nextion_timer;
}

KIBAR_STATUS kibar_nextion_timer_tim(KIBAR_NEXTION_TIMER_ kibar_nextion_timer, uint16_t data) {
	if(data > KIBAR_SCROLLING_INTERVAL_TIME_MAX_LIMIT_ || data < KIBAR_SCROLLING_INTERVAL_TIME_MIN_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_timer->kibar_nextion, kibar_nextion_timer->kibar_nextion_screen_name, kibar_nextion_timer->kibar_nextion_tool_name, "tim", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}

KIBAR_STATUS kibar_nextion_timer_en(KIBAR_NEXTION_TIMER_ kibar_nextion_timer, uint16_t data) {
	if(data > KIBAR_ENABLE_LIMIT_) return kibar_FALSE;
	KIBAR_STATUS kibar_status = kibar_code_generator_data_16_t_(kibar_nextion_timer->kibar_nextion, kibar_nextion_timer->kibar_nextion_screen_name, kibar_nextion_timer->kibar_nextion_tool_name, "en", data);
    if(kibar_status == (uint8_t)kibar_FALSE) return kibar_OK;
    else return kibar_FALSE;
}
