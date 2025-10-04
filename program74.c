#include <stdio.h>
int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 1;
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }
    int transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d", transpose[i][j]);
            if (j < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
