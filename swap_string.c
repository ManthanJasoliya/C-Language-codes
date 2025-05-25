#include <stdio.h>
#include <string.h>

void swap(char *string1, char *string2) {
    char temp[50];
    strcpy(temp, string1);
    strcpy(string1, string2);
    strcpy(string2, temp);
    printf("New string1 is %s\n", string1);
    printf("New string2 is %s\n", string2);
}

int main() {
    char string1[50], string2[50];
    printf("Enter a string 1: ");
    scanf("%s", string1);
    printf("Enter a string 2: ");
    scanf("%s", string2);

    swap(string1, string2); 
    return 0;
}
