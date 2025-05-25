#include <stdio.h>
// This code about star pettern...

int main()
{
    int number;
    printf("Enter number 1 for triangular star pattern : \n");
    printf("Enter number 2 for reverse triangular star pattern : \n");
    printf("Enter the number : ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("*\n"
               "**\n"
               "***\n"
               "****\n");
        break;
    case 2:
        printf("****\n"
               "***\n"
               "**\n"
               "*\n");
        break;

    default:

        break;
    }
    return 0;
}
