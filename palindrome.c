#include <stdio.h>
int main()
{
    int num, rem, reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num !=0)
    {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }
    printf("The reversed number is %d\n", reversed);
}
