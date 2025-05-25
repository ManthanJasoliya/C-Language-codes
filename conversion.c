#include <stdio.h>

/*This programe is about basic condition conversion*/

int main()
{
    int number;
    float kilometer, kilogram, meter, liter;
    float mils, gram, cm, ml;
    char q;

    start:
    printf("for km to mils Enter 1\n");
    printf("for kg to gram Enter 2\n");
    printf("for meter to cm Enter 3\n");
    printf("for liter to ml Enter 4\n");
    printf("Press q for exit\n");

    printf("Enter a number : \n");
    scanf("%d", &number);
    scanf("%c", &q);
    
    if (number == 1)
    {
        printf("Enter the kilometer : ");
        scanf("%f", &kilometer);
        mils = kilometer * 0.621;
        printf("Your answer in miles: %.2f\n", mils);
    }

    if (number == 2)
    {
        printf("Enter the kilogram : ");
        scanf("%f", &kilogram);
        gram = kilogram * 1000;
        printf("Your answer in gram is : %.2f\n", gram);
    }

    if (number == 3)
    {
        printf("Enter the meter : ");
        scanf("%f", &meter);
        cm = meter*100;
        printf("Your answer in cm is : %.2f\n", cm);
    }

    if (number == 4)
    {
        printf("Enter the liter : ");
        scanf("%f", &liter);
        ml = liter * 1000;
        printf("Your answer in ml is : %.2f\n", ml);
    }
    if (q == q)
    {
        printf("You are exited from programe ..!!\n");
        goto end;
    }
    goto start;
    end:
    printf("\n");
        return 0;
}
