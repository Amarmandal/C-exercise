#include <stdio.h>
int fact(int i);

int main()
{
    int a, result;
    printf("Enter the number to find factorial");
    scanf("%d", &a);
    result = fact(a);
    printf("The required result is %d\n", result);
}

int fact(int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return i * fact(i-1);
    }
}
