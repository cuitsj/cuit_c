#include<stdio.h>

int main(void)
{
	double x, y;
	int zi;
	
	printf("please input x,y,z: ");
	scanf("%lf,%lf,%d", &x, &y, &zi);
	printf("\nResult = %.6lf\n", x + zi % 3*(int)(x + y) % 2 / 4);
	return 0;
}

