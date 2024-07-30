/*
 * kibar_nextion_number.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_NUMBER_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_NUMBER_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_NUMBER{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_number_font)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_bco)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_pco)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_xcen)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_ycen)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_val)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_length)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_format)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_isbr)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_spax)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_number_spay)(struct KIBAR_NEXTION_NUMBER*, uint16_t);
};

typedef struct KIBAR_NEXTION_NUMBER* KIBAR_NEXTION_NUMBER_;

KIBAR_NEXTION_NUMBER_ NEW_KIBAR_NEXTION_NUMBER(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_number_font(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_bco(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_pco(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_xcen(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_ycen(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_val(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_length(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_format(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_isbr(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_spax(KIBAR_NEXTION_NUMBER_, uint16_t);
KIBAR_STATUS kibar_nextion_number_spay(KIBAR_NEXTION_NUMBER_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_NUMBER_H_ */
