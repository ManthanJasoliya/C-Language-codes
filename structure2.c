#include <stdio.h>
#include <string.h>

/*.........................FAIL.........................*/

void bhai(struct bank i,int n){
    for (int j = 1; j <= n; j++)
    {
        printf("acc=%d",i.acc);
        printf("name=%s",i.name);
        printf("amount=%f",i.amount);
    }
}
struct bank{
    int acc;
    char name[50];
    float amount;
};
int main()
{
    int n;
    int acc;
    int i=1;
    char name[50];
    float amount;
    printf("Enter how many account details are you want to save : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("your %d details : \n");
        struct bank i;
            scanf("%s",name);
            scanf("%d",i.acc);
            strcpy(i.name,name);
            scanf("%d",i.amount);
    }
    
    return 0;
}
