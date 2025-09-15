//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
	int a,b,sum,difference,product,quotient;
	printf("enter first number:\n");
	scanf("%d",&a);
	printf("enter second number: \n");
	scanf("%d",&b);
	sum = a+b;
	difference= a-b;
	product=a*b;
	quotient= a/b;
	printf("Sum = %d\n",sum);
	printf("Difference=%d\n",difference);
	printf("Product= %d\n",product);
	printf("Quotient= %d\n",quotient);
	return 0;
}
