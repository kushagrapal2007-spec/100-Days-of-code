#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int size, int k) {
    k = k % size;

    if (k == 0 || size <= 1) {
        return;
    }

    reverse(arr, 0, size - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    int k;

    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for array element.\n");
            return 1;
        }
    }

    printf("Enter the number of positions to rotate right (k): ");
    if (scanf("%d", &k) != 1 || k < 0) {
        printf("Invalid rotation value (k).\n");
        return 1;
    }

    rotate(arr, size, k);

    printf("Output array after rotation: ");
    printArray(arr, size);

    return 0;
}
