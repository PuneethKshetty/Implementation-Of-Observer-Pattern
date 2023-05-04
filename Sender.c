#include<stdio.h>
#include<stdlib.h>
#include "Sender.h"
#include "Receiver.h"

void register_callback(Sender* input,callback c)
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
    printf("Registering callback function for input %d\n",input);
    c();
    
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
        register_function(random);
        break;
    case 2:
        printf("Calling function 2\n");
        register_function(random);       
        break;
    case 3: 
        printf("Calling function 3\n");
        register_function(random);
        break;
    
    default:
        printf("No function to call");
        break;
    }

    return 0;
}
