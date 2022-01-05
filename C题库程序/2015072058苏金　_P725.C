#include<stdio.h>

int fblq(int n);

int main(void)
{
	int n, i;

	printf("input a data(3--20): ");
	scanf("%d", &n);
	for (i=1 ; i<=n ; i++)
	{
		printf("%d", fblq(i));
		if (i < n)
		{
			printf("\t");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}

int fblq(int n)
{
	if (n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fblq(n - 1) + fblq(n - 2);
	}
}
