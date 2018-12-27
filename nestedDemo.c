#include <stdio.h>
/*
int main()
{
    int a, b, c;
    printf("Enter any number\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if ( a > c)
        {
            printf("The largest number %d\n", a);
        }
    else if (b > a)
    {
      if ( b > c)
        {
            printf("The largest number %d\n", b);
        }
    }
    }
    else
    {
        printf("The largest number is %d\n", c);
    }
}
*/
int main()
{
    int english, math, physics, computer, chemistry;
    float percentage;
    char grade[5];
    printf("Enter the marks in 5 subjects:");
    scanf("%d%d%d%d%d", &english, &math, &physics, &computer, &chemistry);
    if (english >= 50 && math >=50 && physics >=50
        && computer>=50 && chemistry >= 50)
    {
        if(english <= 100 && math <= 100 && physics <= 100 && computer <= 100 && chemistry <= 100)
        {
            percentage = (english+math+physics+computer+chemistry) / 5.0;
            printf("Congratulation! you have passed all the subject\n");
            printf("You have secured %.2f\n", percentage);
            if(percentage>=90 && percentage<100)
            {
                printf("Your grade: A\n");
            }
            else if (percentage>=90 && percentage<=100)
            {
                printf("Your grade: A\n");
            }
            else if (percentage>=85 && percentage<90)
            {
                printf("Your grade: A-\n");
            }
            else if (percentage>=80 && percentage<=85)
            {
                printf("Your grade: B+\n");
            }
            else if (percentage>=75 && percentage<80)
            {
                printf("Your grade: B\n");
            }
            else if (percentage>=70 && percentage<75)
            {
                printf("Your grade: B-\n");
            }
            else if (percentage>=65 && percentage<60)
            {
                printf("Your grade: C+\n");
            }
            else if (percentage>=60 && percentage<65)
            {
                printf("Your grade: C\n");
            }
            else if (percentage>=55 && percentage<60)
            {
                printf("Your grade: C-\n");
            }
            else
            {
                printf("Your grade: D\n");
            }
        }
        else
        {
            printf("Your marks is greater than 100\n");
        }
    }
    else
    {
        printf("Sorry! You are fail\n");
    }

}
