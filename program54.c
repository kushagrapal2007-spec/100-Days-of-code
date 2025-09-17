/*Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		{
		if(i%2==0)
		printf("\n");
		else
		  {
		  	for(j=1;j<=i;j++)
		  	printf("*");
		  	printf("\n");
		  }
	    }
	    
	    if(i>5)
	    {
	    	if(i==8)
	    	printf("\n");
	    	else
	    	{
	    		if(i==6)
	    		{
	    		for(k=0;k<=i;k++)
	    		printf("*");
	    		printf("\n");
	    	    }
	    	    else
	    	    {
	    	    	for(l=9;l>=i;l--)
	    	    	printf("*");
	    	    	printf("\n");
	    	    	
				}
			}
		}
	}
	return 0;
}
