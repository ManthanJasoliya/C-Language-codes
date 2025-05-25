#include <stdio.h>
int main()
{
    int a[3][4], b[4][2], ans[3][2];
    printf("Enter a elements of first matrics : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter a elements of seconde matrics : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j]=sum;
            sum=0;
        }
    }
    printf("Your output is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t",ans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
