//Write a program to find the roots of a quadratic equation and categorize them.'
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant;
    float root1, root2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and different.\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
        root1 = -b / (2 * a);
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        printf("Roots are imaginary (not real).\n");
    }

    return 0;
}