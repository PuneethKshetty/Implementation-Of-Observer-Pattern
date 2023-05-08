#include<stdio.h>
#include<stdlib.h>
#include "Receiver.h"
#include "Sender.h"

void function1(int input){
    printf("Display function 1 :%d\n",input);
}

void function2(int input){
    printf("Display function 2 :%d\n",input);
}

void function3(int input){
    printf("Display function 3 :%d\n",input);
}

void register_function(callback c)
{   
//     // int random;
//     // // callback funcs[] = {&function1,&function2,&function3};
//     // scanf("%d",&random);
//     // switch (random % 3)
//     // {
//     // case 0:
//     //     c = function1;
//     //     break;
//     // case 1:
//     //     c = function2;
//     //     break;
//     // case 2:
//     //     c = function3;
//     //     break;
//     // default:
//     //     printf("No function to call");
//     //     break;
//     // }

//     // c(1);
    for(int i=0;i< num_inputs;i++)
    {
        register_callback(i,c);
    }

}

