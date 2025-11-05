# Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[] = {3, -1, 0, 7, -5, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive = 0, negative = 0, zero = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    return 0;
}
