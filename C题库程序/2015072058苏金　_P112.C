#include<stdio.h>

int main(void)
{
	int i = 0;
	float x, y = 5000;
	
	printf("Please input x: ");
	scanf("%f", &x);
	do
	{
		y = y*(1 + x / 100);
		i++;
		
	} while (y < 10000);
	printf("\nyear = %d nian, chanzhi = %-.2f\n", 2006+i, y);
	return 0;
}