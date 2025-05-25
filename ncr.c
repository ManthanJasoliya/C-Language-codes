#include <stdio.h>
int fectorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fectorial(n-1);
    }  
}

int main()
{
    int n,r;
    printf("Enter a number N to find nCr :");
    scanf("%d",&n); 
    printf("Enter a R for your nCr :");
    scanf("%d",&r);
    if (n>r)
    {
        printf("Your nCr is %d",fectorial(n)/(fectorial(r)*fectorial(n-r)));
    }
    else
        printf("Please enter a N greater-then R");
    
    return 0;
}
