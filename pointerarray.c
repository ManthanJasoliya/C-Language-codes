#include <stdio.h>

int* findLargest(int arr[], int n) {
    int *largest = &arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            largest = &arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {12, 34, 56, 1, 99, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *largest = findLargest(arr, n);
    printf("The largest element is: %d\n", *largest);

    return 0;
}
