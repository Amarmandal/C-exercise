#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int a, b, result;
    printf("Enter the two number: ");
    scanf("%d  %d", &a , &b);
    result = gcd(a, b);
    printf("Result is %d\n", result);

}

int gcd(int x, int y)
{
    if (y != 0)
    {
        return gcd(y, x % y);
    }
    else
    {
        return x;
    }
}
