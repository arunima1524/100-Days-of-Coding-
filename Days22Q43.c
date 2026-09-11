//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;

    
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}