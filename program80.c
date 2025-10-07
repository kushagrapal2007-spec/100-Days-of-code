//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    int a[r1][c1];
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    if (scanf("%d %d", &r2, &c2) != 2) return 1;
    if (c1 != r2) {
        return 0;
    }
    int b[r2][c2];
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            if (scanf("%d", &b[i][j]) != 1) return 1;
    int result[r1][c2];
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d", result[i][j]);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
