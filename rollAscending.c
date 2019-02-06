#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int i, j, temp;
    struct student s[3];
    for(i=0;i<3;i++)
    {
        printf("Name: \n");
        scanf("%s", s[i].name);
        printf("Roll: \n");
        scanf("%d", &s[i].roll);
        printf("Enter Marks:\n");
        scanf("%f", &s[i].marks);
        printf("\n");

    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(s[i].roll > s[j].roll)
            {
                temp = s[i].roll;
                s[i].roll = s[j].roll;
                s[j].roll = temp;
            }
        }
    }

    printf("Dispalying Information\n");

    for(i=0; i<3;i++)
    {
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n\n");
    }

}
