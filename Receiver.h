#ifndef RECEIVER_H
#define RECEIVER_H
#include "Sender.h"
#define num_inputs 4

typedef void (*callback)(int);

typedef struct{
    callback c;
}Receiver;

void function1();
void function2();
void function3();
void register_function();



#endif
