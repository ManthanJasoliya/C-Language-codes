#include <stdio.h>
int main()
{
    FILE *a1;
    a1=fopen("file_1.txt","r");

    if (a1==NULL)
    {
        printf("File is not exisst !!\n");
        return 1;
    }
    

    char line[50];
    while (fgets(line,sizeof(line),a1) != NULL)
    {
        printf("%s",line);
    }
    

    fclose(a1);
    return 0;
}
