#include<stdio.h>

int main(void)
{
	int m, n, sum=0;

	printf("please input m: ");
	scanf("%d", &m);
	for (n = 0 ; sum <= m-n+1 ; n++)
	{
		sum = n*(1 + n) / 2;
	}
	printf("\nResult: n=%d, sum=%d\n", n-1, sum);
	return 0;
}
