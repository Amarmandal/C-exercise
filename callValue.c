#include <stdio.h>
int some(int m, int n)
{
    m = 100;
    n = 200;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    some(a, b);
    printf("%d %d\n", a, b);
}
