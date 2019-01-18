#include <stdio.h>
int main()
{
    int sum=0, i, j, m, n;
    int a[10] [10], b[10] [10], c[10] [10];
    printf("Enter rows and column: ");
    scanf("%d %d", &m, &n);
    //Value for A
    printf("A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i] [j]);
        }
    }
    //Value for B
    printf("B:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i] [j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c [i] [j] = a[i] [j] + b[i] [j];
        }
    }
    printf("The sum is \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i] [j]);
        }
        printf("\n");
    }

}
