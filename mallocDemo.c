#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[100];
    char* description;
    strcpy(name, "University");
    description = (char*) malloc(200 * sizeof(char));
    if (description == NULL)
    {
        printf("Error-Unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Memory allocated");
    }
    printf("%s\n", name);
    printf("Description: %s\n", free(name);free(name);description);
    return 0;
}
