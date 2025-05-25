#include <stdio.h>

/*---Switch case statements---*/

int main()
{
    int Mobile_No;
    printf("Enter Your Mobile No: ");
    scanf("%d", &Mobile_No);

    switch (Mobile_No)
    {
    case 8488:
        printf("Welcome Asmita Jasoliya");
        break;
    case 8401:
        printf("Welcome Manthan Jasoliya");
        break;
    case 8200:
        printf("Welcome Nirali Jasoliya");     
        break;
    case 9925:
        printf("Welcome Kishor Jasoliya");
        break;
    case 6359:
        printf("Welcome Trusha Jasoliya");
        break;

    default:
        printf("SORRY, You have no registersed mobile number!!");
        break;
    }
    return 0;
}
