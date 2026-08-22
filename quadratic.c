// Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discri, root1, root2, rPart, iPart; // discri = discriminant  rPart = realPart  iPart = imaginaryPart

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    discri = b * b - 4 * a * c;
    
/* Categories of Roots
Discriminant > 0: Roots are real and distinct.
Discriminant = 0: Roots are real and equal.
Discriminant < 0: Roots are complex (imaginary).*/

    if (discri > 0) {
        root1 = (-b + sqrt(discri)) / (2 * a);
        root2 = (-b - sqrt(discri)) / (2 * a);
        printf("Roots are Real and Distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discri == 0) {
        root1 = -b / (2 * a);
        printf("Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        rPart = -b / (2 * a);
        iPart = sqrt(-discri) / (2 * a);
        printf("Roots are Complex and Imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", rPart, iPart);
        printf("Root 2 = %.2f - %.2fi\n", rPart, iPart);
    }

    return 0;
}