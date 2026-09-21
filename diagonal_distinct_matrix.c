// Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/



#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols;
    int i, j;
    int distinct = 1;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}