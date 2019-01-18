#include <stdio.h>
int main()
{
    int sum = 0, n, i;
    int a[10];
    printf("Enter the number of data to be entered! ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The sum is %d\n", sum);

}

































