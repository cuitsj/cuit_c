#include<stdio.h>

int main(void)
{
	double n1, n2;

	printf("Input 2 numbers: ");
	scanf("%lf %lf", &n1, &n2);
	if (n2 == 0)
	{
		printf("\nDivid by zero\n");
	}
	else
	{
		printf("\nThe result is: %.2lf\n", n1 / n2);
	}
	return 0;
}
