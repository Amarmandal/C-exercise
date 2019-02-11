/*
Program- To compare two date entered by the user
Author- Amar Kumar Mandal
Language Used- C
Text Editor Used- Sublime Text
*/
#include <stdio.h>
#include <string.h>
struct date
{
  char month[20];
  int day;
  int year;
};

int main()
{
  int i;
  struct date dob[2];
  for(i=0; i<2; i++)
  {
    printf("Enter the month\n");
    scanf("%s", dob[i].month);
    printf("Enter the day\n");
    scanf("%d", &dob[i].day);
    printf("Enter the year\n");
    scanf("%d", &dob[i].year);
  }

  if(strcmp(dob[0].month,dob[1].month) == 0 && (dob[0].day == dob[1].day) && (dob[0].year == dob[1].year))
    {
      printf("\nDates are equal\n");
    }
  else
  {
    printf("\nDates are not equal\n");
  }

}

