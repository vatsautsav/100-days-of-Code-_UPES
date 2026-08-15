// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main() {
    int l, b, area, perim;
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breadth : ");
    scanf("%d", &b);
    
    area = l * b;
    perim = 2 *(l + b);
    printf("Area of Rectangle is : %d \n", area);
    printf("Perimeter of Rectangle is : %d \n", perim);
    return 0;
}