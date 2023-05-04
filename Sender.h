#ifndef SENDER_H
#define SENDER_H
#include "Receiver.h"
#define num_inputs 4
#define MAX_CALLBACKS 6

typedef struct sender{
    int input;
}Sender;

void register_callback();

#endif
