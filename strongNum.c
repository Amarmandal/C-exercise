/* Program for strong number
Strong number = 145
Concept: !1+!4+!5 = 145 then number is strong
 */

/* Program for strong number */
#include <stdio.h>

int fact(int n);
int strongNum(int n);

int main()
{
    int n, result;
    printf("Enter the number: \n");
    scanf("%d", &n);
    result = strongNum(n);
    if (result == n)
    {
        printf("The number is strong number\n");
    }
    else
    {
        printf("The number is not strong number\n");
    }
}

int fact(int n)
{
    int i, factorial = 1;
    for(i=1; i<=n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int strongNum(int n)
{
    int rem, strong=0;
    while(n!=0)
    {
        rem = n % 10;
        strong = strong + fact(rem);
        n = n/10;
    }
    return strong;
}
