#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter a row and colume for matrix : \n");
    scanf("%d %d",&row ,&col);
    int arr[row][col];
    printf("Enter a elements of matrics : \n");
    for (int  i = 0; i < row; i++)
    {
        for (int  j= 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your trancepose matrix is : \n");
    for (int  i = 0; i < col; i++)
    {
        for (int  j= 0; j < row; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
