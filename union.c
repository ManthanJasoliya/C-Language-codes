#include <stdio.h>

union AA{
    int a;
    char b;
}var;

int main()
{
    var.a=2;
    var.b="Manthan";
    printf("%d\n",var.a);
    printf("%c",var.b);
    return 0;
}
//its output is the intrestindg its diffrent something
