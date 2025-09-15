//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main()
{
	int p,r,t;
	float si,ci,amt;
	printf("Enter principal: \n");
	scanf("%d",&p);
	printf("Enter rate: \n");
	scanf("%d",&r);
	printf("Enter time:\n");
	scanf("%d",&t);
	si= p*r*t/100;
	amt = p * pow((1+r/100),t);
	ci = amt-p;
	printf("Simple interest= %f\n",si);
	printf("Compound interest = %f\n",ci);
	return 0;
}
