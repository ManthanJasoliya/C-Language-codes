#include <stdio.h>
/*This is simpel table program*/

int main()
{
    int number;
    printf("Enter a number whose multiplication table you want :\n");
    scanf("%d", &number);
    printf("Your multiplication table of %d is ", number);
    printf("%d X 1=%d\n", number, number*1);
    printf("%d X 2=%d\n", number, number*2);
    printf("%d X 3=%d\n", number, number*3);
    printf("%d X 4=%d\n", number, number*4);
    printf("%d X 5=%d\n", number, number*5);
    printf("%d X 6=%d\n", number, number*6);
    printf("%d X 7=%d\n", number, number*7);
    printf("%d X 8=%d\n", number, number*8);
    printf("%d X 9=%d\n", number, number*9);
    printf("%d X 10=%d\n", number, number*10);
    return 0;
}
