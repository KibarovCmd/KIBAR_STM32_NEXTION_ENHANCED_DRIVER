/*
 * kibar_nextion_xfloat.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_XFLOAT_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_XFLOAT_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_XFLOAT{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_xfloat_font)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_bco)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_pco)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_xcen)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_ycen)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_val)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_vvs0)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_vvs1)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_isbr)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_spax)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_xfloat_spay)(struct KIBAR_NEXTION_XFLOAT*, uint16_t);
};

typedef struct KIBAR_NEXTION_XFLOAT* KIBAR_NEXTION_XFLOAT_;

KIBAR_NEXTION_XFLOAT_ NEW_KIBAR_NEXTION_XFLOAT(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_xfloat_font(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_bco(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_pco(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_xcen(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_ycen(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_val(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_vvs0(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_vvs1(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_isbr(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_spax(KIBAR_NEXTION_XFLOAT_, uint16_t);
KIBAR_STATUS kibar_nextion_xfloat_spay(KIBAR_NEXTION_XFLOAT_, uint16_t);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_XFLOAT_H_ */
