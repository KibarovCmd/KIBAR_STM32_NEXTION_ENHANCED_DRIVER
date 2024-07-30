/*
 * kibar_nextion_waveform.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_WAVEFORM_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_WAVEFORM_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_WAVEFORM{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	char* kibar_nextion_waveform_id;
	KIBAR_STATUS (*kibar_nextion_waveform_bco)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_gdc)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_gdw)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_gdh)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_pco0)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_dis)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_add)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_addt)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_cle)(struct KIBAR_NEXTION_WAVEFORM*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_waveform_cle_all)(struct KIBAR_NEXTION_WAVEFORM*);
};

typedef struct KIBAR_NEXTION_WAVEFORM* KIBAR_NEXTION_WAVEFORM_;

KIBAR_NEXTION_WAVEFORM_ NEW_KIBAR_NEXTION_WAVEFORM(KIBAR_NEXTION_, char*, char*, char*);
KIBAR_STATUS kibar_nextion_waveform_bco(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_gdc(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_gdw(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_gdh(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_pco0(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_dis(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_add(KIBAR_NEXTION_WAVEFORM_, uint16_t, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_addt(KIBAR_NEXTION_WAVEFORM_, uint16_t, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_cle(KIBAR_NEXTION_WAVEFORM_, uint16_t);
KIBAR_STATUS kibar_nextion_waveform_cle_all(KIBAR_NEXTION_WAVEFORM_);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_WAVEFORM_H_ */
