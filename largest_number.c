// Write a program to input three numbers and find the largest among them using if-else.


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
     printf("Enter third number: ");
    scanf("%d", &c);

    // Find the largest number
    if (a >= b && a >= c) {
        printf("The largest number is %d", a);
    }
    else if (b >= a && b >= c) {
        printf("The largest number is %d", b);
    }
    else {
        printf("The largest number is %d", c);
    }

    return 0;
}