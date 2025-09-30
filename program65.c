//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int binarySearch(int arr[], int size, int target) 
{
	
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) 
            return mid;
         
        
        else if (arr[mid] < target) 
            low = mid + 1;
        
        
        else  
            high = mid - 1; 
        
    }

    
    return -1;
}


int main()
{
    int i, N; 
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 1; 
    }

    int arr[N]; 
    for ( i = 0; i < N; i++) {
        if (scanf("%d", &arr[i]) != 1) {
           
            return 1;
        }
    }

    int target; 
    
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int resultIndex = binarySearch(arr, N, target);

    if (resultIndex != -1) 
	{
	    
        printf("Found at index %d\n", resultIndex);
    } 
	else 
	{
        printf("-1\n");
    }

    return 0;
}
