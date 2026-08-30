//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'A') {
        printf("%c is a vowel.\n", ch);
    } else if (ch == 'e' || ch == 'E') {
        printf("%c is a vowel.\n", ch);
    } else if (ch == 'i' || ch == 'I') {
        printf("%c is a vowel.\n", ch);
    } else if (ch == 'o' || ch == 'O') {
        printf("%c is a vowel.\n", ch);
    } else if (ch == 'u' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}