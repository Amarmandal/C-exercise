#include <stdio.h>
#define size 10
void main()
{
    int a[size], i , min;
    printf("Give 10 value\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    min = 99999;
    for (i=0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Minimum value is %d\n", min);
}
