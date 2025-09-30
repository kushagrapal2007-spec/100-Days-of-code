//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
#define MAX_SIZE 100
int insertSorted(int arr[], int *N, int element) {
    
    if (*N >= MAX_SIZE) {
        
        return 0; 
    }

    int i;
    for (i = *N - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element; 
    (*N)++;
    
    return 1; 
}
int main() {
    int i, N;
    if (scanf("%d", &N) != 1 || N < 0 || N >= MAX_SIZE) {
        return 1; 
    }

    int arr[MAX_SIZE]; 
    for ( i = 0; i < N; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int element_to_insert; 
    if (scanf("%d", &element_to_insert) != 1) {
        return 1;
    }
    if (insertSorted(arr, &N, element_to_insert)) {
        for ( i = 0; i < N; i++) {
            printf("%d%s", arr[i], (i == N - 1) ? "" : " ");
        }
        printf("\n");
    } else {
        fprintf(stderr, "Error: Array is full. Insertion failed.\n");
        return 1;
    }

    return 0;
}
