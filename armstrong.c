// Write a program to check if a number is an Armstrong number.


#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)  {
        printf("Please enter a non-negative number.\n");
    }  else {
        original = n;

        while (n > 0)  {
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n = n / 10;
        }
        if (sum == original)
            printf("%d is an Armstrong number.\n", original);
        else
            printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}