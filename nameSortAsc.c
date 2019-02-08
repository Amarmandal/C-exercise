/*
Program- To Sort the Name in ascending order
Author- Amar Kumar Mandal
Language Used- C
Text Editor Used- Sublime Text
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char names[10][50], read_arr[10] [50], temp[50];
    int i, j, n;
    // Asking User to input multiple number of string
    printf("Enter the limit of Name\n");
    scanf("%d", &n);

    //ASking user to enter n names and Storing it in read_arr sequentially
    printf("Enter %d names\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%s", names[i]);
        strcpy(read_arr[i], names[i]);
    }

    //Sorting Names in ascending order
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(read_arr[i], read_arr[j])<0)//comparing string
                {
                     strcpy(temp, read_arr[i]);
                     strcpy(read_arr[i], read_arr[j]);
                     strcpy(read_arr[j], temp);
                }
        }
    }
    printf("\n");

    printf("Unsorted Names-------Sorted Names\n\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t\t\t%s\n", names[i], read_arr[i]);
    }

}
