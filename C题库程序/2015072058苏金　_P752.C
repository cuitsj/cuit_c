#include<stdio.h>

int main(void)
{
	int m, n, qw, bw, sw, gw, i, j, k;
	
	printf("Input m, n: ");
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		j = n;
		k = m;
	}
	else
	{
		j = m;
		k = n;
	}
	printf("\nResult: ");
	for (i = j ; i <= k ; i++)
	{
		qw = i / 1000;
		bw = i / 100 % 10;
		sw = i / 10 % 10;
		gw = i % 10;
		if (((qw + bw + sw + gw)%3 == 0) && (qw == 5 || bw == 5 || sw == 5 || gw == 5))
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}