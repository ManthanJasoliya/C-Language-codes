#include <stdio.h>

/*---This is the factorial calculation---*/

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int number;
    
    printf("Enter the number whose factorial you want : ");
    scanf("%d", &number);
    printf("your factorial of %d is : %d " ,number ,factorial(number));

    return 0;
}