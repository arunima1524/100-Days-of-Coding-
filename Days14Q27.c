//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0, num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + num;
        num = num + 2;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}