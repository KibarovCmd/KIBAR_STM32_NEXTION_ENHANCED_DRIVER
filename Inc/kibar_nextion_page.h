/*
 * kibar_nextion_page.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_PAGE_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_PAGE_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_PAGE{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	KIBAR_STATUS (*kibar_nextion_page_bco)(struct KIBAR_NEXTION_PAGE*, uint16_t);
};

typedef struct KIBAR_NEXTION_PAGE* KIBAR_NEXTION_PAGE_;

KIBAR_NEXTION_PAGE_ NEW_KIBAR_NEXTION_PAGE(KIBAR_NEXTION_, char*);
KIBAR_STATUS kibar_nextion_page_bco(KIBAR_NEXTION_PAGE_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_PAGE_H_ */
