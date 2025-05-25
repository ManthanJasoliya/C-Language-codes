#include <stdio.h>
int main()
{
    FILE *a2;
    a2=fopen("file_2.txt","w");

    fprintf(a2,"this is writing filr and it is genrated and this txt writen from code file !");

    fclose(a2);
    return 0;
}