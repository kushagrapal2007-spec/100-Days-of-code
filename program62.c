//Q62:Reverse an array without taking extra space.

#include <stdio.h>
int main() 
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }


    int start = 0, end = (n - 1), t;
    while (start < end)
     {
        
        t=a[start];
        a[start]=a[end];
        a[end]=t;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}