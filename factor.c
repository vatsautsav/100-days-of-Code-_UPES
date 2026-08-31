// Write a program to print all factors of a given number.


#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    }  else   {
        printf("Factors of %d are: \n", n);

        for (i = 1; i <= n; i++)  {
         
            if (n % i == 0)
            printf("%d \n", i);
        }
    }
    return 0;
}