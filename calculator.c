// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result = %.2f\n", (float)a / b);
            break;

        case '%':
            if (b == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                result = a % b;
                printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}