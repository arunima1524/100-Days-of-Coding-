//Rotate an array to the right by k positions.
#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}