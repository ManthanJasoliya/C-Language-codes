#include <stdio.h>
/*--- array---*/

int main()
{
    //creat an integer array....
    int number[4]={1,2,3,4};
    
    //print array....
    printf("The array is : ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d", number[i]);
    }
    printf("\n");
    
    //access elements of the array....
    printf("First element is : %d\n ", number[0]);
    printf("Second element is : %d\n ", number[1]);
    printf("Third element is : %d\n ", number[2]);
    printf("fourth element is : %d\n ", number[3]);

    return 0;
}
