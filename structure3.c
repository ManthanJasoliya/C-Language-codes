#include <stdio.h>
#include <string.h>

struct bank
{
    int acc;
    char name[20];
    float amount;
};


int main()
{
    int n;
    printf("Enter a n :");
    scanf("%d",&n);
    struct bank data[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter a %d data :\n",i);
        struct bank data[i];
        scanf("%d",&data[i].acc);
        char name[20];
        scanf("%s",&name);
        strcpy(data[i].name,name);
        scanf("%f",&data[i].amount);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",data[i].acc);
        printf("%s\n",data[i].name);
        printf("%f\n",data[i].amount);
    }
    
    return 0;
}
