// Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include <stdio.h>

int main() {
    int n, a[100], element, i, position;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++)
    {
        if (element < a[i])
        {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = element;

    for (i = 0; i <= n; i++)
    {
        printf("%d", a[i]);

        if (i < n)
            printf(" ");
    }

    return 0;
}