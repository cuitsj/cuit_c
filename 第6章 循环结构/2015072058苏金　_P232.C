#include<stdio.h>

int main(void)
{
	int j, num, x, y, zi, i=100;

	printf("Please Input a number: ");
	scanf("%d", &num);
	printf("\nResult:");
	while (i <= 999)
	{
		x = i / 100;
		y = i / 10 % 10;
		zi = i % 10;
		if (x*x+y*y+zi*zi+i/2 == num)
		{
			printf("%5d", i);
			j = 1;
		}
		i++;
	}
	if (j != 1)
	{
		printf("not Find!\n");
	}
	printf("\n");
	return 0;
}
