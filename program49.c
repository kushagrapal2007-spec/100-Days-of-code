#include <stdio.h>
int main()
{
	int rows =5;
	int i;
	for( i =1;i<=rows;i++)
	{
		int j;
		for( j=rows-i+1;j<=rows; j++)
		printf("%d",j);
		printf("\n");
	}
	return 0;
	
}
