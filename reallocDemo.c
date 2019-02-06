#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* name;
    name = (char*)malloc(11);
    strcpy(name, "AmarKumar");
    printf("%s\n", name);
    name = (char*)realloc(name, 23);
    strcpy(name, "Amar Kumar Mandal");
    printf("%s\n", name);
}
