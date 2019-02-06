/*
Write a 'C' Program to create a structure of student having fields roll_no, stud_name, mark1, mark2, mark3. Calculate total marks and average marks. Arrange the records in descending order of marks.
*/
#include <stdio.h>
struct student
{
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3;
    float total;
    float avg;
};

int main()
{
    int i, j, temp;
    struct student s[3];
    for(i=0;i<3; i++)
    {
        s[i].roll_no = i + 1;
        printf("Name: \n");
        scanf("%s", s[i].stud_name);
        printf("Enter the marks in 3 subject\n");
        scanf("%f %f %f", &s[i].mark1, &s[i].mark2, &s[i].mark3);
        s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg = s[i].total / 3.0;
        printf("\n");

    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(s[i].avg > s[j].avg)
            {
                temp = s[i].avg;
                s[i].avg = s[j].avg;
                s[j].avg = temp;
            }
        }
    }

    printf("Displaying information: \n");
    for(i=0; i<3; i++)
    {
        printf("Roll: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].stud_name);
        printf("Total: %f\n", s[i].total);
        printf("Average: %f\n", s[i].avg);
        printf("\n\n");
    }


}
