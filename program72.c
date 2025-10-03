#include <stdio.h>
int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 1;
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int element;
            if (scanf("%d", &element) != 1) return 1;
            sum += element;
        }
    }
    printf("%d\n", sum);
    return 0;
}
