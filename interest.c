// Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    float si, ci, amount;

    // Input
    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    // Output
    printf("Simple Interest is : %.2f \n", si);
    printf("\nCompound Interest is : %.2f \n", ci);

    return 0;
}