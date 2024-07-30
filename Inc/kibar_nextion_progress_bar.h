/*
 * kibar_nextion_progress_bar.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_PROGRESS_BAR_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_PROGRESS_BAR_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_PROGRESS_BAR{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_progress_bar_val)(struct KIBAR_NEXTION_PROGRESS_BAR*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_progress_bar_bco)(struct KIBAR_NEXTION_PROGRESS_BAR*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_progress_bar_pco)(struct KIBAR_NEXTION_PROGRESS_BAR*, uint16_t);
};

typedef struct KIBAR_NEXTION_PROGRESS_BAR* KIBAR_NEXTION_PROGRESS_BAR_;

KIBAR_NEXTION_PROGRESS_BAR_ NEW_KIBAR_NEXTION_PROGRESS_BAR(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_progress_bar_val(KIBAR_NEXTION_PROGRESS_BAR_, uint16_t);
KIBAR_STATUS kibar_nextion_progress_bar_bco(KIBAR_NEXTION_PROGRESS_BAR_, uint16_t);
KIBAR_STATUS kibar_nextion_progress_bar_pco(KIBAR_NEXTION_PROGRESS_BAR_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_PROGRESS_BAR_H_ */
