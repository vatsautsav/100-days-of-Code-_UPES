// Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>

int main()
{
    int sec, hrs, min, remaining_sec;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hrs = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    remaining_sec = sec % 60;

    printf("Time = %02d:%02d:%02d\n", hrs, min, remaining_sec);

    return 0;
}