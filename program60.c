//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
	int i,j,n,arr[n],positive=0,negative=0,zero=0;
	printf("Enter total number of elements: \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(j=0;j<n;j++)
	{
		if(arr[j] == 0)
		zero++;
		else if(arr[j]>0)
		positive++;
		else if(arr[j]<0)
		negative++;
		
	}
	printf("Positive = %d , Negative = %d , Zero = %d",positive,negative,zero);
	return 0;
}
