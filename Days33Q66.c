//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // one extra space for the new element

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter element to insert: ");
    scanf("%d", &key);

    int i = n - 1;

    // Shift elements greater than key one position to the right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at the correct position
    arr[i + 1] = key;
    n++;  // array now has one more element

    printf("Array after insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}