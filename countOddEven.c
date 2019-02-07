/*Written and compiled by Amar */
#include <stdio.h>

void digitCount(int n);
int main()
{
    int result, n;
    printf("Enter the number\n");
    scanf("%d", &n);
    digitCount(n);
    return 0;
}

void digitCount(int n)
{
    int even=0, odd=0, rem;
    while(n!=0)
    {
        rem = n % 10;
        if(rem != 0)
        {
            if(rem % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
            n = n /10;
        }
        else
        {
            n = n / 10;
        }
    }
    printf("Number of odd digit %d\n", odd);
    printf("Number of even digit %d\n", even);
}
