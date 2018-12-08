#include <stdio.h>
int max(int x, int y);
int main() 
{
	int a, b;
	printf("Enter the first number\n");
	scanf("%d", &a);
	printf("Enter the second number\n");
	scanf("%d", &b);
	max(a, b);
}

int max(int x, int y)
{
	if (x > y)
	{
		printf("%d\n", x);
	}
	else
	{
		printf("%d\n", y);
	}
}
