/*
Program- Determinant of two by two matrix
Author- Amar Kumar Mandal
Language Used- C
Text Editor Used- Sublime Text
*/
#include <stdio.h>

void read_arr(int m[][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
          scanf("%d", &m[i][j]);
}

void display(int m[][10], int row, int col)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
  int a[10][10];
  int row, col, i, j , det = 0;
  row = 2;
  col = 2;
  printf("Enter the 2 X 2 matrix\n");
  read_arr(a, row, col);

  printf("Entered Matrix:\n");
  display(a, row, col);

  det = det + a[0][0] * a[1][1] - a[0][1] * a[1][0];
  printf("Determinant is: %d\n", det);
  return 0;
}
