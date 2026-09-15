//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int row_sums[rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j]; // Add each element to the corresponding row sum
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, row_sums[i]);
    }

    return 0;
}