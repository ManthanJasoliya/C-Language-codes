#include <stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int new[3][3];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 3,k=1; j > 0,k<=3; j--,k++)
        {
            new[i][k]=arr[i][j];

        if (new[i][k]==1)
        {
            new[i][k]==0;
        }
        else
        {
            new[i][k]==1;
        }
        }
    }

for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        
    }
}
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        printf("%d ",new[i][j]);
    }
    printf("\n");
}
    return 0;
}
