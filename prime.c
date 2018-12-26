#include <stdio.h>
int prime(int x);
int main()
{
	int a, b;
	printf("Enter any number: ");
	scanf("%d", &a);
	b = prime(a);
	if (b == 2)
	{
		printf("prime\n");
	}
	else
	{
		printf("Not prime\n");
	}

return 0;
}

int prime(int x)
{
	int y, p=0;
	for(y =1; y<=x; y++)
	{
		if (x % y == 0)
		{
			p++;
		}
	}
	return p;
}
