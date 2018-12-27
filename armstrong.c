#include <stdio.h>
#include <math.h>
int armstrong(int n);
int main()
{
    int a, result;
    printf("Enter any number");
    scanf("%d", &a);
    result = armstrong(a);
    if (result == a)
    {
        printf("The number %d is armstrong\n", a);
    }
    else
    {
        printf("The number is not armstrong\n");
    }
}

int armstrong(int n)
{
    int rem, arm = 0;
    while (n!=0)
    {
        rem = n % 10;
        arm = arm + pow(rem, 3);
        n = n/10;
    }
    return arm;
}
