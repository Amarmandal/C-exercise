/*Transpose of Two matrix Using Function */
#include<stdio.h>
#define MAXCOLUMN 10

void read_arr(int a[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
            }
    }
}

void transpose_matrix(int x[][10], int transpose[][10], int r, int c)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i] = x[i][j];
        }
    }

}

void print_arr(int m[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
        {
        for(j=0;j<col;j++)
        {
            printf("%d ",m[i][j]);
         }
        printf("\n");
        }
}

void main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and column\n");
    scanf("%d %d", &r, &c);
    printf("Read and Array\n");
    read_arr(a, r, c);
    printf("Entered Matrix is\n");
    print_arr(a, r, c);
    transpose_matrix(a, transpose, r, c);
    printf("Transpose of a Matrix\n");
    print_arr(transpose, c, r);
}
