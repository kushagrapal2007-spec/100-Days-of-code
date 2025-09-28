//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
	int i,j,n,n1,arr[n];
	scanf("%d \n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	scanf("%d \n",&n1);
	
	for(j=0;j<n;j++)
	{
		if(arr[j]==n1)
		{
			printf("Number found at index %d",j);
			return 0;
		}
		
	}
	printf("-1");
	return 0;
}
