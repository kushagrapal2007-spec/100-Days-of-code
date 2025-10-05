//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int r, c, i, j;
    if (scanf("%d %d", &r, &c) != 2) return 1;
    int matrix[r][c];
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }
    if (r != c) {
        printf("False\n");
        return 0;
    }
    bool isSymmetric = true;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
