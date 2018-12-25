#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\t");
    scanf("%d", &n);
    if (n % 2 == 0 )
        goto even;
    else
        goto odd;
    even:
        printf("The nubmber is even");
        goto end;
    odd:
        printf("The number is odd");
        goto end;
    end:
        printf("\n");
}
