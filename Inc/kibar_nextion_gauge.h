/*
 * kibar_nextion_gauge.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_GAUGE_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_GAUGE_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_GAUGE{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_gauge_bco)(struct KIBAR_NEXTION_GAUGE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_gauge_val)(struct KIBAR_NEXTION_GAUGE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_gauge_pco)(struct KIBAR_NEXTION_GAUGE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_gauge_wid)(struct KIBAR_NEXTION_GAUGE*, uint16_t);
};

typedef struct KIBAR_NEXTION_GAUGE* KIBAR_NEXTION_GAUGE_;

KIBAR_NEXTION_GAUGE_ NEW_KIBAR_NEXTION_GAUGE(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_gauge_bco(KIBAR_NEXTION_GAUGE_, uint16_t);
KIBAR_STATUS kibar_nextion_gauge_val(KIBAR_NEXTION_GAUGE_, uint16_t);
KIBAR_STATUS kibar_nextion_gauge_pco(KIBAR_NEXTION_GAUGE_, uint16_t);
KIBAR_STATUS kibar_nextion_gauge_wid(KIBAR_NEXTION_GAUGE_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_GAUGE_H_ */
