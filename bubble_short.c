#include <stdio.h>
int main()
{
    int n;
    printf("how many elements ? : ");
    scanf("%d ",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=n-1; i>=0; i--)
    {
        for (int j=0; j<=i; j++)
        {
            if (a[j]>a[j+1]){
            int temp=0;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
