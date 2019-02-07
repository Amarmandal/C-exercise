/*
Program Written and Compiled By Amar
Program to Find Distanc Between Two Points
*/
#include <stdio.h>
#include <math.h>

struct point //User-Defined Data Type
{
    int x, y;
};

float getDistance(struct point a, struct point b)
{
    float distance;
    distance = pow((a.x - b.x), 2) + pow((a.y-b.y), 2);
    return sqrt(distance);
}

int main()
{
    struct point a, b;
    float result;
    printf("Enter the co-ordinates of A:\n");
    scanf("%d %d", &a.x, &a.y);

    printf("Enter the co-ordinates of B:\n");
    scanf("%d %d", &b.x, &b.y);

    result = getDistance(a, b);

    printf("Distance Between A and B = %.2f\n", result);
}
