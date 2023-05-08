#include<stdio.h>
#include<stdlib.h>
#include "Sender.h"
#include "Receiver.h"

int num_callbacks = 0;
int num_funcs = 4;
callback array[MAX_CALLBACKS];

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
    if(num_callbacks < MAX_CALLBACKS)  //registering the callback functions
    { 
        array[num_callbacks++] = c;
        printf("Registering callback function for input %d\n",input);
    }
    else
    {
       printf("Max number of callbacks reached\n");
    }
    // for(int i=0;i<num_callbacks;i++)
    // {
    //     array[i]();
    // }
    
}

//passing an input to the random function 
// void send_input(int input)
// {
//     for(int i = 0;i < num_callbacks;i++)
//     {
//         array[i](input);
//     }
// }

int main()
{
    int random,i;
    callback a;
    callback funcs[3] = {function1,function2,function3};  //function 1 is 0 in array
                                                            //function 2 is 1 in array
                                                            //function 3 is 2 in array

    printf("Enter the function name to be called inside receiver\n");
    scanf("%d",&i);
    printf("Enter 1, 2 or 3 ?\n");
    scanf("%d",&random);
    switch (random)
    {
    case 1:      
        printf("Calling function %d\n",i+1);
        // register_callback(random,a);
        funcs[i](random);
        break;
    case 2:
        printf("Calling function %d\n",i+1);   
        // register_callback(random,a);
        funcs[i](random);
        break;
    case 3: 
        printf("Calling function %d\n",i+1);
        // register_callback(random,a);
        funcs[i](random);
        break;
    
    default:
        printf("No function to call");
        break;
    }

    //display the input to random
    for(int i = 0;i < num_callbacks;i++)
    {
        array[i](random);
    }

    return 0;
}
