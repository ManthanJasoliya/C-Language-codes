#include <stdio.h>

 int main()
 {
    label:
      printf("we are in label\n");

      goto end;
    end:
      printf("we are at end\n");

    return 0;
 }
 