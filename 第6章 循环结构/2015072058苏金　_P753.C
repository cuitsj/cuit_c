#include<stdio.h>

#include<math.h>

int main(void)
{
	int y, i;
	double x, zi=1;
	
	printf("Input x, y: ");
	scanf("%lf,%d", &x, &y);
	if (y == 0)
	{
		printf("\nResult:%lf^%d=%lf", x, y, zi);
	}
	else
	{
		for (i = abs(y) ; i > 0 ; i--)
		{
			zi = zi*x;
		}
		if (y > 0)
		{
			printf("\nResult:%lf^%d=%lf", x, y, zi);
		}
		else if (y < 0)
		{
			printf("\nResult:%lf^%d=%lf", x, y, 1/zi);
		}
	}
	printf("\n");
	return 0;
}