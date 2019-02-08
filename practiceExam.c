#include <stdio.h>
void display(int m[][10], int row, int col);
void read_arr(int m[][10], int row, int col);
int main()
{
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

      printf("Enter number of rows and columns of first matrix\n");
      scanf("%d%d", &m, &n);

      printf("Enter elements of first matrix\n");
      read_arr(first, m, n);

      printf("Enter number of rows and columns of second matrix\n");
      scanf("%d%d", &p, &q);

      if (n != p)
        printf("The matrices can't be multiplied with each other.\n");
      else
      {
        printf("Enter elements of second matrix\n");

        read_arr(second, p, q);

        for (c = 0; c < m; c++) {
          for (d = 0; d < q; d++) {
            for (k = 0; k < p; k++) {
              sum = sum + first[c][k]*second[k][d];
            }

            multiply[c][d] = sum;
            sum = 0;
          }
        }

        printf("Product of the matrices:\n");

        display(multiply, m, q);

      return 0;
}
}

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
