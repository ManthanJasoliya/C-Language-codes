#include <stdio.h>

int gcd(int a,int b);

int main()
{
    int a,b;
    printf("Enter a two number for GCD : ");
    scanf("%d %d",&a, &b);

    printf("Your gcd is %d",gcd(a,b));
    return 0;
}
gcd(a,b){
    while (b!=0)
    {
        int temp=b;
        b=a%b;  
        a=temp;
    }
    return a;
}