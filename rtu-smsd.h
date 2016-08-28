//
// Created by h37 on 8/28/16.
//

#ifndef SMS_RTU_SMSD_H
#define SMS_RTU_SMSD_H
#ifdef __cplusplus
extern "C" {
#endif

#include <gammu-smsd.h>

typedef enum {
    SMSD_SEND_OK = 1,
    SMSD_SEND_SENDING_ERROR,
    SMSD_SEND_DELIVERY_PENDING,
    SMSD_SEND_DELIVERY_FAILED,
    SMSD_SEND_DELIVERY_OK,
    SMSD_SEND_DELIVERY_UNKNOWN,
    SMSD_SEND_ERROR
} GSM_SMSDSendingStatus;

int create_outbox_sms(char *num,char *massage,char *id);

int create_outbox_sms_utf8(char *num,char *massage,char *id);

GSM_SMSDSendingStatus get_status(char *id);

int read_last_inbox_massage();

int delete_massage_form_sentitems(char *id);

int delete_massage_form_outbox(char *id);

int delete_massage_form_inbox(char *id);
#ifdef __cplusplus
}
#endif
#endif //SMS_RTU_SMSD_H
