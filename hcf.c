// Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main()  {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)   {
        printf("Please enter positive numbers.\n");
    }  else  {

        hcf = 1;
        for (int i = 1; i <= a && i <= b; i++) {
          
            if (a % i == 0 && b % i == 0)  {
                hcf = i;
            }
        }

        printf("HCF = %d\n", hcf);
    }
    return 0;
}