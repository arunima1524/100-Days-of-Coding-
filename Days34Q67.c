//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // one extra space for the new element

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right from the position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert key at the specified position
    arr[pos] = key;
    n++;  // array now has one more element

    printf("Array after insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}   