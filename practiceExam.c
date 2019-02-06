/*Multiplication of Two matrix Using Function */
#include<stdio.h>

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
};
