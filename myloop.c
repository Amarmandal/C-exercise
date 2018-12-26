#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            if (i == 1)
            {
                printf("A ");
            }
            else if(i == 2)
            {
                printf("B ");
            }
            else if(i == 3)
            {
                printf("C ");
            }
            else if(i == 4)
            {
                printf("D ");
            }
            else
            {
                printf("E ");
            }
        }
        printf("\n");
    }
}
