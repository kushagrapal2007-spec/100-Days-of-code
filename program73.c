#include <stdio.h>
int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 1;
    int row_sums[rows];
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            int element;
            if (scanf("%d", &element) != 1) return 1;
            row_sum += element;
        }
        row_sums[i] = row_sum;
    }
    for (int i = 0; i < rows; i++) {
        printf("%d", row_sums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
