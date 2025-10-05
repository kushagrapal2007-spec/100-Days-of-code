//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j;
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    int a[r1][c1];
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    if (scanf("%d %d", &r2, &c2) != 2) return 1;
    if (r1 != r2 || c1 != c2) {
        return 0;
    }
    int b[r2][c2];
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            if (scanf("%d", &b[i][j]) != 1) return 1;
    int sum[r1][c1];
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            printf("%d", sum[i][j]);
            if (j < c1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
