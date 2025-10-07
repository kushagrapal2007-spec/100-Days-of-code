//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int R, C, i, j;
    if (scanf("%d %d", &R, &C) != 2) return 1;
    int mat[R][C];
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (scanf("%d", &mat[i][j]) != 1) return 1;
        }
    }
    int total_diagonals = R + C - 1;
    for (int d = 0; d < total_diagonals; d++) {
        if (d % 2 == 0) {
            int r, c;
            if (d < C) {
                r = 0;
                c = d;
            } else {
                r = d - C + 1;
                c = C - 1;
            }
            while (r < R && c >= 0) {
                printf("%d", mat[r][c]);
                if (d < total_diagonals - 1 || (r < R - 1 && c > 0) || (r == R - 1 && c > 0)) {
                    printf(" ");
                }
                r++;
                c--;
            }
        } else {
            int r, c;
            if (d < R) {
                r = d;
                c = 0;
            } else {
                r = R - 1;
                c = d - R + 1;
            }
            while (r >= 0 && c < C) {
                printf("%d", mat[r][c]);
                if (d < total_diagonals - 1 || (r > 0 && c < C - 1) || (r == 0 && c < C - 1)) {
                    printf(" ");
                }
                r--;
                c++;
            }
        }
    }
    printf("\n");
    return 0;
}
