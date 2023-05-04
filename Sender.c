#include<stdio.h>
#include<stdlib.h>
#include "Sender.h"
#include "Receiver.h"


void register_callback(int input,callback c)
{
    // if(input == 1)
    // {
    //     c = function1;
    // }
    // else if(input == 2)
    // {
    //     c = function2;
    // }
    // else if(input == 3)
    // {
    //     c = function3;
    // }
    // else{
    //     printf("Invalid Inputs");
    //     return;
    // }

    // c();
    int num_callbacks = 0;
    callback array[MAX_CALLBACKS];
    if(num_callbacks < MAX_CALLBACKS)
    {
        array[num_callbacks++] = c;
        printf("Callback registered successfully\n");
    }
    else
    {
       printf("Max number of callbacks reached\n");
    }
    printf("Registering callback function for input %d\n",input);
    for(int i=0;i<num_callbacks;i++)
    {
        array[i]();
    }
    
}

int main()
{
    int random;
    printf("Enter 1, 2 or 3 ?\n");
    scanf("%d",&random);
    switch (random)
    {
    case 1:      
        printf("Calling function 1\n");
        register_callback(random,function1);
        break;
    case 2:
        printf("Calling function 2\n");
        register_callback(random,function2);       
        break;
    case 3: 
        printf("Calling function 3\n");
        register_callback(random,function3);
        break;
    
    default:
        printf("No function to call");
        break;
    }

    return 0;
}
