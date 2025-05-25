#include <stdio.h>
#include <string.h>

union manthan{
    int n;
    char name[4];
};

int main()
{
    union manthan a;
    
    a.n=81;
    printf("Your roll number is : %d\n",a.n);
    strcpy(a.name,"Man");
    printf("Name of the student is the : %s\n",a.name);
    printf("Size iof the Union is : %d\n",sizeof(union manthan));
    return 0;
}

