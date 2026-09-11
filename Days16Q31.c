//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, binary[32], count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation = 0\n");
        return 0;
    }

    while (n > 0) {
        binary[count] = n % 2;
        n = n / 2;
        count++;
    }

    printf("Binary representation = ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}