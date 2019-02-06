#include <stdio.h>
int i;
int main()
{
    char name[] = "i love isqush";
    int count = 0;
    while (name[i]!='\0')
    {
        printf("%c", name[i]);
        count++;
        i++;
    }
    printf("\n");
    printf("The lenght of the string is %d\n", count);
    return 0;
}
