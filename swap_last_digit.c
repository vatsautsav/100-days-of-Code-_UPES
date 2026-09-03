// Write a program to swap the first and last digit of a number.


#include <stdio.h>

int main()  {
    int n, original, first, last, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    if (n < 10)
        printf("Number after swapping = %d", n);
    
    else {
        last = n % 10;

        while (n >= 10)  {
            n = n / 10;
            power = power * 10;
        }

        first = n;
        middle = (original % power) / 10;
        result = last * power + middle * 10 + first;

        printf("Number after swapping = %d", result);
    }
    return 0;
}