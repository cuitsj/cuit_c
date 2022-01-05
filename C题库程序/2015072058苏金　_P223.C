#include<stdio.h>

int main(void)
{
	double i, sum = 0, high = 10000;

	printf("Please input n: ");
	scanf("%lf", &i);
	for (i; i>0 ; i--)
	{
		high /= 2;
		sum += 3*high;
	}
	printf("\nsn=%12.6lf,hn=%7.6lf\n", sum - high, high);
	return 0;
}


