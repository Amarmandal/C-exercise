#include <stdio.h>
#include<conio.h
int fact(int i);

int main()
{
    int a, result;
    clrscr();
    printf("Enter the number to find factorial");
    scanf("%d", &a);
    result = fact(a);
    printf("The required result is %d\n", result);
    getch();
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
