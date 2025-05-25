#include <stdio.h>

/*---Pointers---*/

int main()
{
    int variable = 10;   // Declare an integer variable 
    int *ptr = &variable;   // Declare pointer and assign it the address of variable

    //print the value of variable
    printf("The value of variable is : %d\n", variable);

    //print the address of variable
    printf("The address of variable is : %d\n", (void*)&variable);

    //print the value of pointer (address it holds)
    printf("The value of pointer is : %d\n", (void*)ptr);

    //print the value at the address stored in pointer (dereference the pointer)
    printf("value at address stored in pointer : %d\n", *ptr);

    //Modify the pointer
    *ptr = 20;
    printf("new value of variable is %d\n", variable);

    return 0;
}
