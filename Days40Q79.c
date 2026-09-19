//Perform diagonal traversal of a matrix.
void diagonalTraversal(int matrix[][10], int rows, int cols) {
    printf("Diagonal Traversal of the matrix:\n");

    // Traverse the upper half diagonals (including the main diagonal)
    for (int d = 0; d < cols; d++) {
        int row = 0;
        int col = d;
        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }

    // Traverse the lower half diagonals
    for (int d = 1; d < rows; d++) {
        int row = d;
        int col = cols - 1;
        while (row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }
}