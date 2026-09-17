//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square, cannot calculate main diagonal sum.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonal_sum = 0;

    for (int i = 0; i < rows; i++) {
        diagonal_sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", diagonal_sum);

    return 0;
}