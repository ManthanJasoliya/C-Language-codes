#include <stdio.h> 

/*---Do While Loop---*/

int main()
{
   int number, index=0;
   printf("Enter a number : ");
   scanf("%d", &number);

   do
   {
       printf("%d\n", index+1);
       index = index+1;
   } while (index>number);
    
    return 0;
}
