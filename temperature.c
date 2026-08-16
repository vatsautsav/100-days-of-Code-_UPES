// Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>

int main () {
    float celsius, fah;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    fah = (celsius * (9.0/5.0)) + 32;
    printf("Temperature in Fahrenheit is : %f \n", fah);

    return 0;
}