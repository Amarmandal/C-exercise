#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        printf("A for apple");
        break;
        case 'b':
        case 'B':
        printf("B for ball");
        break;
        case 'c':
        case 'C':
        printf("C for cat");
        break;
        case 'd':
        case 'D':
        printf("D for dog");
        break;
        default:
        printf("Nothing");
    }
}
