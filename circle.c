// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main () {
    int r;
    float circum, area;
    printf("Enter radius of the circle : ");
    scanf("%d", &r);
    
    circum = 2 * 3.14 * r;
    area = 3.14 * r * r;
    printf("Circumference of the circle is : %f \n", circum);
    printf("Area of the circle is : %f \n", area);

    return 0;
}