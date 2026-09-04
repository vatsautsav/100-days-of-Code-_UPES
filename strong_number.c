// Write a program to check if a number is a strong number.


#include <stdio.h>

int main() {
    int n, original, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)  {
        printf("Please enter a non-negative number.");
    } else  {
        original = n;

        if (n == 0)  {
            sum = 1;
        }  else  {

            while (n > 0) {
               
                digit = n % 10;
                fact = 1;
                for (i = 1; i <= digit; i++)  {
                    fact = fact * i;
                }
                sum = sum + fact;
                n = n / 10;
            }
        }

        if (sum == original)
            printf("%d is a Strong Number.", original);
        else
            printf("%d is not a Strong Number.", original);
    }
    return 0;
}