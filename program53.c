/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=9;i++)
	{
		if(i==1 || i==9)
		printf("*\n");
		
		if(i==2 || i==8)
		printf("***\n");
		
		if(i==3 || i==7)
		printf("*****\n");
		
		if(i==4 || i==6)
		printf("*******\n");
		
		if(i==5)
		printf("*********\n");
	}
	return 0;
}
