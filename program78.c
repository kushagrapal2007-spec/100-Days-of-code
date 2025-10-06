//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int r, c, i, j;
    if (scanf("%d %d", &r, &c) != 2) return 1;
    if (r != c) {
        return 0;
    }
    int matrix[r][c];
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }
    int sum = 0;
    for (i = 0; i < r; ++i) {
        sum += matrix[i][i];
    }
    printf("%d\n", sum);
    return 0;
}
