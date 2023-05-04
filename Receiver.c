#include<stdio.h>
#include<stdlib.h>
#include "Receiver.h"
#include "Sender.h"

void function1(){
    printf("Display Input1\n");
}

void function2(){
    printf("Display Input2\n");
}

void function3(){
    printf("Display Input3\n");
}

void register_function(callback c)
{   
   for(int i=0;i<num_inputs;i++)
   {
      register_callback(i,c);
   }

}

