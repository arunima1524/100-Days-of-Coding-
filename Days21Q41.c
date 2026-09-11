//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, firstDigit, lastDigit, digits, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Count number of digits
    digits = 0;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    lastDigit = n % 10;
    firstDigit = n / (int)pow(10, digits - 1);

    result = n - (firstDigit * (int)pow(10, digits - 1));  
    result = result / 10;                                   
    result = result * 10 + firstDigit;                      
    result = result + lastDigit * (int)pow(10, digits - 1);  
    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}