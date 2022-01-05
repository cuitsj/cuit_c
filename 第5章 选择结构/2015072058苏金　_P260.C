#include<stdio.h>

int main(void)
{
	int i, j, k, zx, zj, zd;
	
	printf("请输入3个数：");
	scanf("%d %d %d", &i, &j, &k);
	if (i>k && k>j )
	{
		zx = j;
		zj = k;
		zd = i;
	}
	else if (i>j && j>k)
	{
		zx = k;
		zj = j;
		zd = i;
	}
	else if (i<j && i>k)
	{
		zx = k;
		zj = i;
		zd = j;
	}
	else if (k>j && j>i)
	{
		zx = i;
		zj = j;
		zd = k;
	}
	else if (j>k && k>i)
	{
		zx = i;
		zj = k;
		zd = j;
	}
	else if (k>i && i>j)
	{
		zx = j;
		zj = i;
		zd = k;
	}
	printf("\n这三个数由小到大为: %d   %d   %d\n", zx, zj, zd);
	return 0;
}

