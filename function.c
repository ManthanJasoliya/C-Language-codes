#include <stdio.h>
/*---This is the basic function programe ---*/

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b, c;
    printf("Enter a number a :");
    scanf("%d", &a);
    printf("Enter a number b :");
    scanf("%d", &b);

    c=sum(a ,b);
    printf("Your answer is %d \n", c);
    return 0;
}
