//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n<2){
        printf("No even numbers in the range.\n");
        return 0;
    }
    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
