// Write a program to print numbers from 1 to n.


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Enter a positive integer.");
    }
    else {
        for (i = 1; i <= n; i++)
            printf("%d \n", i);
    }
    return 0;
}