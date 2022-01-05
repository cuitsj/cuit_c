#include<stdio.h>

int main(void)
{
	long int n, i, j, k, lj, m=0;

	printf("请输入一个数：");
	scanf("%d", &n);
	printf("\n该数的各位数之逆序为：");
	i = n;
	j = n;
	while (i > 0)
	{
		j = i % 10;
		i = i / 10;
		printf("%d", j);
	}
	printf("\n该数的各位数之和为：");
	k = n;
	lj = n;
	while (k > 0)
	{
		lj = k % 10;
		k = k / 10;
		m = m + lj;
	}
	printf("%d", m);
	printf("\n");
	return 0;
}