/*
 * kibar_nextion_qrcode.h
 *
 *  Created on: Jul 29, 2024
 *      Author: İskender Musaoğlu
 */

#ifndef KIBAR_NEXTION_INC_KIBAR_NEXTION_QRCODE_H_
#define KIBAR_NEXTION_INC_KIBAR_NEXTION_QRCODE_H_

#include <kibar_nextion.h>

struct KIBAR_NEXTION_QRCODE{
	KIBAR_NEXTION_ kibar_nextion;
	char* kibar_nextion_screen_name;
	char* kibar_nextion_tool_name;
	KIBAR_STATUS (*kibar_nextion_qrcode_dis)(struct KIBAR_NEXTION_QRCODE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_qrcode_bco)(struct KIBAR_NEXTION_QRCODE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_qrcode_pco)(struct KIBAR_NEXTION_QRCODE*, uint16_t);
	KIBAR_STATUS (*kibar_nextion_qrcode_txt)(struct KIBAR_NEXTION_QRCODE*, char*);
};

typedef struct KIBAR_NEXTION_QRCODE* KIBAR_NEXTION_QRCODE_;

KIBAR_NEXTION_QRCODE_ NEW_KIBAR_NEXTION_DUAL_QRCODE(KIBAR_NEXTION_, char*, char*);
KIBAR_STATUS kibar_nextion_qrcode_dis(KIBAR_NEXTION_QRCODE_, uint16_t);
KIBAR_STATUS kibar_nextion_qrcode_bco(KIBAR_NEXTION_QRCODE_, uint16_t);
KIBAR_STATUS kibar_nextion_qrcode_pco(KIBAR_NEXTION_QRCODE_, uint16_t);
KIBAR_STATUS kibar_nextion_qrcode_txt(KIBAR_NEXTION_QRCODE_, char*);

#endif /* KIBAR_NEXTION_INC_KIBAR_NEXTION_QRCODE_H_ */
