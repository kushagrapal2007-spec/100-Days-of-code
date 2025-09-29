//Q63:Merge two arrays.

#include <stdio.h>
int main()
 {
    int n1, n2, i, j;


    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int a1[n1];

    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int a2[n2];

    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++)
     {
        scanf("%d", &a2[i]);
    }

    int merged[n1 + n2];
    for (i = 0; i < n1; i++)
     {
        merged[i] = a1[i];
    }
    for (j = 0; j < n2; j++)
    {
        merged[i + j] = a2[j];
    }
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
     {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}