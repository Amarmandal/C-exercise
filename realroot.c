#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float x1, x2;
    printf("Enter the value of a, b, c");
    scanf("%d %d %d", &a, &b, &c);
    x1 = -b + sqrt(pow(b,2) - 4 * a * c);
    x2 = -b - sqrt(pow(b,2) - 4 * a * c);
    printf("Required x1 and x2 is %.2f and %.2f\n", x1/2*a, x2/2*a);
}
