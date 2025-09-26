//Q:Find the sum of array elements
#include <stdio.h>
int main()
{
    int n,i,sum=0;
printf("enter the number of elements in the array:\n");
scanf("%d", &n);
int a[n];
printf("enter %d elements:\n", n);
for(i=0; i< n;i++)
{
    scanf("%d", &a[i]);
    sum += a[i];
}
printf("sum of array elements= %d\n", sum);  
return 0;
}

