#include <stdio.h>
 /*---This is the tabel using loop*/


  int main()
  {
    int number ,i;
    printf("Enter the number whose multiplication table you want :");
    scanf("%d", &number);
    printf("Your table of %d is hear:", number);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", number ,i ,number*i);
    }
    
    return 0;
  }
  