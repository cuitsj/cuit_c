#include<stdio.h>

#define PI 3.14

int main(void)
{
	double  r, h;

	printf("Input: ");
	scanf("r=%lf, h=%lf", &r, &h);
	printf("\nC1 = %.2lf\n S = %.2lf\n V = %.2lf\n", 2*PI*r, PI*r*r, PI*r*r*h);
	return 0;
}