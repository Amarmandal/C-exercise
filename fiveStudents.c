#include <stdio.h>
int main()
{
    char names[5][10];
    int i;
    printf("Enter the names of five students\n");
    for(i=0; i<5; i++)
    {
        scanf("%s", names[i]);
    }

    printf("Displaying the name of the students\n");
    for(i=0; i< 5; i++)
    {
        printf("%s\n", names[i]);
    }
}
