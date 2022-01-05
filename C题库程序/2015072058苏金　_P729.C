#include<stdio.h>

int main(void)
{
	int i, j;

	printf("please input x, y: ");
	scanf("%d,%d", &i, &j);
	if (i > j)
	{
		printf("\n%d is bigger\n", i);
	}
	else if (i < j)
	{
		printf("\n%d is bigger\n", j);
	}
	return 0;
}
