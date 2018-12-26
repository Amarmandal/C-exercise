#include <stdio.h>
long int fact(int n);
int main()
{
    long int result;
    int a;
    printf("Enter any number whose factorial to be found");
    scanf("%d", &a);
    result = fact(a);
    printf("Result is %ld\n", result);
}

long int fact(int n)
{
    int x;
    long int factorial = 1;
    if (n<0)
    {
        printf("Factorial of negative nunmber doesnot exit\n");
    }
    else
    {
        for (x = 1; x <= n; x++)
        {
            factorial *= x;
        }
        return factorial;
    }

}
