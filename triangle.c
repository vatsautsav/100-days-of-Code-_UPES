// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c){
        printf("The given triangle is Equilateral Triangle");
    }else if (a == b || b == c || a == c){
        printf("The given triangle is Isosceles Triangle");
    }else{
        printf("The given triangle is Scalene Triangle");
    }

    return 0;
}