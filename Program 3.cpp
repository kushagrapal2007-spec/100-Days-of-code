//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
	int l,b,pm,area;
	printf("Enter length : \n");
	scanf("%d",&l);
	printf("Enter breadth:\n ");
	scanf("%d",&b);
	pm = 2*(l+b);
	area = l*b;
	printf("Area of rectangle = %d\n", area);
	printf("Perimeter of rectangle = %d\n", pm);
	return 0;
}
