#include <stdio.h>

/*IF code*/

int main()
{
    int age ;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("age conformation: You enter your age %d \n", age);
    
    if (age>=18)
    {
        printf("You can vote!!\n");
    }
    else if (age>=10)
    {
        printf("You can vote for children!!");     
    }
    else 
    {
        printf("You cannot vote");
    }
    return 0;
}
