#ifndef SENDER_H
#define SENDER_H
#include "Receiver.h"
#define MAX_RECEIVERS 4

typedef struct sender{
    int input;
}Sender;

void register_callback();

#endif