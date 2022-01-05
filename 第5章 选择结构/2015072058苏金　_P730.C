#include<stdio.h>

int main(void)
{
	int i, j;

	printf("please input x y: ");
	scanf("%d %d", &i, &j);
	if (i == j)
	{
		printf("\nyes\n");
	}
	else
	{
		printf("\nno\n");
	}
	return 0;
}



