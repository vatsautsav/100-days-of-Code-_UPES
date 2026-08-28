// Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main()  {
    int n, i;
    int product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0 )  {
        printf("Invalid input. \n");
    } else if (n < 2)  {
        printf("Product = 0 \n");
    } else    {
        for (i = 2; i <= n; i += 2)
        {
            product = product * i;
        }
       printf("Product of even numbers from 1 to %d = %d", n, product);
    }
    return 0;
}