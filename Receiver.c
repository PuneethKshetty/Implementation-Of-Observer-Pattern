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

void register_function(int input)
{   
   for(int i = 1; i < num_inputs; i++)
   {
        if(i == 1)
        {
            register_callback(i,function1);
        }
        else if(i == 2){
            register_callback(i,function2);
        }
        else {
            register_callback(i,function3);
        }
   }
}

