//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
int main()
{
	int i,j,n,arr[n],even=0,odd=0;
	printf("Enter total number : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			printf("Enter no.%d :",i+1);
			scanf("%d",&arr[i]);
			printf("\n");
	}
	
	for(j=0;j<n;j++)
	{
		if(arr[j]%2 ==0)
		even++;
		else 
		odd++;
	}
	printf("Even = %d , ",even);
	printf("Odd = %d",odd);
}
