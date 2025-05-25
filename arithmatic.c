#include <stdio.h>

int main()
{
    int value = 7;
    int *ptr = &value;

    printf("The value is : %d ", value);
    printf("The address of value is :  %x\n", &value);

    // Or aslo print address of value like this ---
    printf("The address of value is : %x\n", ptr);

    // increment of value od address---
    ptr++;
    printf("The new address is : %x\n", ptr);

    return 0;

}