#include<stdio.h>

int main(void)
{
	int x;
	double y;

	printf("Please input x:");
	scanf("%d", &x);
	if (x < 0)
	{
		y = (double) - 5*x + 27;
	}
	else if (x > 0)
	{
		y = (double)2*x - 1;
	}
	else if (x == 0)
	{
		y = 7909;
	}
	printf("F(%d) = %-.0lf\n", x, y);
	return 0;
}