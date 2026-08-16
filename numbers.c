// Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>

int main () {
    int a, b, sum, diff, pro;
    float quo;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    pro = a * b;
    quo = a/b;

    printf("Sum is : %d \n", sum);
    printf("Difference is : %d \n", diff);
    printf("Product is : %d \n", pro);
    printf("Quotient is : %f \n", quo);

    return 0;
}