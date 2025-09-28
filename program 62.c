//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
	int i,j,k,n,arr[n],rev[n];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(j=0;j<n;j++)
	{
		
		rev[j]=arr[i-1];
		i--;
	}
	
	for(k=0;k<n;k++)
	printf("%d  ",rev[k]);
	return 0;
}
