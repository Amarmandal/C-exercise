#include <stdio.h>
void main()
{
    int n, a[100], sum = 0, devi[100];
    float mean;
    printf("How many numbers\n");
    scanf("%d", &n);
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    mean = sum / n;
    for (i=0; i<n; i++)
    {
        devi[i] = a[i] - mean;
    }
    for (i = 0; i< n; i++)
    {
        printf("%d\t", devi[i]);
    }
    printf("\n");
}
