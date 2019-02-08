#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int len;
    printf("Enter your full name: \n");
    gets(name);
    len = strlen(name);
    printf("%d lenght of the string\n", len);
}
