#include <stdio.h>

/*---Type casting is use for change the datatype ex. int to float---*/

int main()
{
    int a, b;
    printf("Enter a number a :");
    scanf("%d", &a);
    printf("Enter a number b :");
    scanf("%d", &b);

/*---This is main line---*/
    printf("Your answer is %f", (float)a/b);

    return 0;
}
