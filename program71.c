#include <stdio.h>
void read_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 1;
    int matrix[rows][cols];
    read_matrix(rows, cols, matrix);
    print_matrix(rows, cols, matrix);
    return 0;
}
