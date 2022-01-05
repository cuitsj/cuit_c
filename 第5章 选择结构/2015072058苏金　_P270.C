#include<stdio.h>

int main(void)
{
	double i, j, k, min, cen, max;

	printf("请输入3个数：");
	scanf("%lf %lf %lf", &i, &j, &k);
	max = i > j ? i : j ;
	max = max > k ? max : k;
	min = i < j ? i : j;
	min = min < k ? min : k;
	if (i<max && i>min)
	{
		cen = i;
	}
	else if (j<max && j>min)
	{
		cen = j;
	}
	else
	{
		cen = k;
	}
	printf("\n这三个数由大到小为: %.2f   %.2f   %.2f\n", max, cen, min);
	return 0;
}



