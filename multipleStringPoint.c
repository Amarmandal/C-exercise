#include <stdio.h>

int main()
{
    char* names[] ={
        "Amar Mandal",
        "Sizzling",
        "Biscuit",
        "LIfe Isqush",
    };
    int i;
    for (i=0; i<4; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}
