#include <stdio.h>
#define MAX 10

void read_arr(int a[][MAX], int row,int col)
{
    int i, j;
    printf("Enter the elements to read array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int b[][MAX], int row,int col)
{
    int i, j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int m1[MAX][MAX],row, col;
    printf("Enter the rows and col\n");
    scanf("%d %d", &row, &col);
    read_arr(m1, row, col);
    display(m1, row, col);
}
