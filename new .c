#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number for raw: ");
    scanf("%d",&a);
    printf("Enter a number for col :");
    scanf("%d",&b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
