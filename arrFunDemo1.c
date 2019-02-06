#include <stdio.h>
void read(int [], int);
void process (int [], int);
void display(int [], int);
int n, arr[100], i, j, sum;
int main()
{
    printf("Enter the size of array\n");
    scanf("%d", &n);
    read(arr, n);
    process(arr, n);
    display(arr, n);
    return 0;
}

void read(int a[], int x)
{
    printf("Enter the elements of array\n");
    for (i=0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int c[], int z)
{
    for(i=0; i<z; i++)
    {
        printf("%d\n", c[i]);
    }
}

void process(int b[], int y)
{
    for(i=0; i< y; i++)
    {
        b[i] = b[i] * 2;
    }
}
