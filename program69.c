#include <stdio.h>
#include <limits.h>
{
    if (size < 2) {
        return INT_MIN; 
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
        
            secondLargest = arr[i];
        }
}
    if (secondLargest == INT_MIN && largest != INT_MIN) { 
        return INT_MIN;
    }
    
    return secondLargest;
}

int main() {
    int size;
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

    int result = findSecondLargest(arr, size);
    if (result == INT_MIN) {
    
        printf("Could not find a distinct second largest element (e.g., array too small or all elements are the same).\n");
    } else {
        printf("The second largest element is: %d\n", result);
    }

    

    return 0;
}
