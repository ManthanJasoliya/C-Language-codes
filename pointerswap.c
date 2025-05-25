#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 5, y = 10;
    printf("old : x=%d, y=%d\n",x,y);
    
    swap(&x, &y);
    printf("new : x=%d, y=%d\n",x,y);
    return 0;
}
