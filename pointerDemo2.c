#include <stdio.h>
#include <string.h>
//Error while compiling
/*
int main()
{
    int num[] = {21, 34, 12, 44, 56, 17};
    int i;
    for(i = 0; i <= 5; i++)
    {
        printf("\nAddress = %u", &num[i]);
        printf("element = %d", num[i]);
    }
}
*/

int main( )
{
    int name[20];
    name[14] = "andal";
    printf("%s\n", name);
}
