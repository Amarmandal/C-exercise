#include <stdio.h>
#include <math.h>
int dudeny(int n);
int main()
{
    int a, result;
    printf("Enter the number: ");
    scanf("%d", &a);
    result = dudeny(a);
    if (pow(result, 3) == a)
    {
        printf("The number %d is Dudendant number\n", a);
    }
    else
    {
        printf("The number %d is not a dudendant number\n", a);
    }
}

int dudeny(int n)
{
    int rem;
    int sum = 0;
    while (n!= 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    return sum;
}
