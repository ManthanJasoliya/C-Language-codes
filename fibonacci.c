#include <stdio.h>
//This code is about recursive and iterative approch to solve fibonacci series

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

int fib_recursive(int n)
{
    if (n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int main()
{
    int number;
    printf("Enter the number for fibonacci : ");
    scanf("%d", &number);

    printf("Your answer to number %d by iterative approch is : %d\n", number ,fib_iterative(number));
    printf("Your answer to number %d by recursive approch is : %d\n", number ,fib_recursive(number));   
    return 0;
}
