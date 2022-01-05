#include<stdio.h>

int main(void)
{
	int num, i, j, k;

	printf("Input an integer: ");
	scanf("%d", &num);
	i = num % 10;
	num = num / 10;
	j = num % 10;
	k = num / 10;
	printf("\nThe result is %d%d%d\n", i, j, k);
	return 0;
}


