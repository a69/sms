//
// Created by h37 on 8/28/16.
//

#include "rtu-smsd.h"

int create_outbox_sms(char *num, char *massage, char *id) {
    return 0;
}


int create_outbox_sms_utf8(char *num, char *massage, char *id) {
    return 0;
}

GSM_SMSDSendingStatus get_status(char *id) {
    return SMSD_SEND_ERROR;
}

int read_last_inbox_massage() {
    return 0;
}

int delete_massage_form_sentitems(char *id) {
    return 0;
}

int delete_massage_form_outbox(char *id) {
    return 0;
}


int delete_massage_form_inbox(char *id) {
    return 0;
}