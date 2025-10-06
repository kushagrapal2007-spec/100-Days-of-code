//Q77: Check if the elements on the diagonal of a matrix are distinct.

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
        return 0;
    }
    int diag[r];
    for (i = 0; i < r; ++i) {
        diag[i] = matrix[i][i];
    }
    bool isDistinct = true;
    for (i = 0; i < r - 1; ++i) {
        for (j = i + 1; j < r; ++j) {
            if (diag[i] == diag[j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }
    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
