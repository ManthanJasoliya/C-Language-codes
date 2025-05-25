#include <stdio.h>

struct store{
    int price;
    union 
    {
        struct 
        {
            int n1;
            char c1;
        }a;
        struct 
        {
            int n2;
            char c2;
        }b;
    }u;
};

int main()
{
    struct store s1,s2;
    s1.price=10;
    s1.u.a.n1=1;
    s1.u.a.c1="A";
    s2.u.b.n2=2;
    s2.u.b.c2="B";
    
    printf("Your value for the : %d",sizeof(struct store));
    return 0;
}
