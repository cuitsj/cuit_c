#include<stdio.h>

int main(void)
{
	int juzhen[20][20], mi, ni, i, j, max, maxi, maxj, k, find = 0;
	
	printf("Please input m and n:");
	scanf("%d %d", &mi, &ni);
	printf("Please input a juZhen(%d hang, %d lie):\n", mi, ni);
	for (i=0 ; i<mi ; i++)
	{
		for (j=0 ; j<ni ; j++)
		{
			scanf("%d", &juzhen[i][j]);
		}
	}
	for (i=0 ; i<mi ; i++)
	{
		max = juzhen[i][0];
		for (j=0 ; j<ni ; j++)
		{
			if (juzhen[i][j] > max)
			{
				max = juzhen[i][j];
				maxi = i;
				maxj = j;
			}
		}
		for (k=0 ; k<mi ; k++)
		{
			if (juzhen[k][maxj] >= max)
			{
				find++;
			}
			if (find == mi)
			{
				break;
			}
			if (juzhen[k][maxj]<max || k==mi-1)
			{
				find = 0;
			}
		}
		if (find == mi)
		{
			break;
		}
	}
	if (find == mi)
	{
		printf("\nyou an dian, wei: juZhen[%d][%d]=%d\n", maxi, maxj, max);
	}
	else
	{
		printf("\nmei you an dian.\n");
	}
	return 0;
}
