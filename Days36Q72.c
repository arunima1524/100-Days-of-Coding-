//Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int rows, cols, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to sum
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}