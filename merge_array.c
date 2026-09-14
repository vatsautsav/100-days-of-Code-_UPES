// Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/



#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int n, m, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++)
    {
        merged[i] = a[i];
    }

    for(i = 0; i < m; i++)
    {
        merged[n + i] = b[i];
    }

    for(i = 0; i < n + m; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}