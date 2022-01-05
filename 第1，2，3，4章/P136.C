#include<stdio.h>
#include<math.h>

int main(void)
{
	double i, j;

	printf("«Î ‰»Îª°∂» x: ");
	scanf("%lf", &i);
	j = cos(i);
	printf("\nCos(%.2lf) = %.5lf\n", i, j);
	return 0;
}
