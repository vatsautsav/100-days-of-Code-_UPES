// Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main()  {
    int n, original, digits = 0, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)   {
        printf("Please enter a non-negative number.\n");
        return 0;
    }
    original = n;

    // Count the number of digits
    if (n == 0)
        digits = 1;
        
    else  {
        while (n > 0)   {
            digits++;
            n = n / 10;
        }
    }
    n = original;

    // Calculate the Armstrong sum
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + pow(digit, digits);
        n = n / 10;
    }
    
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
