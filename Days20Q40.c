//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, reversedBinary = 0, remainder, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;

        if (remainder == 0) {
            complement = complement + place;
        }
        // if remainder is 1, we add nothing (it becomes 0)

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}