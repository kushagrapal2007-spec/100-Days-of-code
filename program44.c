#include <stdio.h>
int main ()
{
	int n;
	double sum = 0.0;
	scanf("%d",&n);
	int numerator = 1;
	int denominator = 1;
	for(int i = 1; i<= n ; i++)
	{
		if(i==1)
		denominator= 1;
		else
		denominator +=2;
		sum+= (double)numerator/denominator;
		numerator+=2;
		
	}
	printf("Approximate sum:%.1lf\n",sum);
	return 0;
	
}
