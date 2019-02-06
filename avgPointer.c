#include <stdio.h>

double getAverage(int* arr, int size);

int main()
{
    int balance[5] = {10, 10 , 10 , 10 , 10};
    double avg;
    avg = getAverage(balance, 5);
    printf("Average is: %.2f\n", avg);
    return 0;
}

double getAverage(int* arr, int size)
{
    int i, sum = 0;
    int* ptr;
    double avg;
    ptr = arr;
    for (i=0; i<5; i++)
    {
        sum += *ptr;
        ptr++;
    }
    avg = (double)sum/size;
    return avg;
}
