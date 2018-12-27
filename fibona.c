#include <stdio.h>
#include <math.h>
int main()
{
    int n, first = 1, second = 4, next, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(c = 1; c <=n; c++)
    {
        if (c <= 2)
        {
            next = pow(c, 2);
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}
