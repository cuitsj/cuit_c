#include<stdio.h>

int main(void)
{
	int i;
	double s, bi, a, n;

	printf("Please input a,n: ");
	scanf("%lf,%lf", &a, &n);
	bi = a;
	s = a;
	for (i = 1 ; i < n ; i++)
	{
		a = 10*a;
		bi = bi + a;
		s = s + bi;
	}
	printf("\na+aa+...=%.0lf\n", s);
	return 0;
}
