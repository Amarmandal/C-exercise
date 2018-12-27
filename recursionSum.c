#include <stdio.h>
int sum(int n);
int main()
{
    int a, result;
    printf("Enter the number of terms\n");
    scanf("%d", &a);
    result = sum(a);
    printf("Required sum is %d\n", result);
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n-1);
    }
}
