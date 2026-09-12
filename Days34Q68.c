//Delete an element from an array.
#include <stdio.h>
int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left from the position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  // array now has one less element

    printf("Array after deletion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}