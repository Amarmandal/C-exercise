#include <stdio.h>

int main()
{
    int a[100], n, i, j, swap;
    printf("ENter the number of elements\n");
    scanf("%d", &n);

    for(i=0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i< n; i++)
    {
        for(j=i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("Sorted Array: \n");

    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}
