//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0, numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;
        sum = sum + (numerator / denominator);
    }

    printf("Sum of series = %.2f\n", sum);

    return 0;
}