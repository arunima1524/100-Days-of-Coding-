//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, remainder;
    int count[10] = {0};  // count[0..9] for each digit

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;  // handle negative numbers
    }

    if (n == 0) {
        count[0] = 1;
    }

    while (n != 0) {
        remainder = n % 10;
        count[remainder]++;
        n = n / 10;
    }

    int maxCount = 0, maxDigit = 0;
    for (int i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most = %d (%d times)\n", maxDigit, maxCount);

    return 0;
}