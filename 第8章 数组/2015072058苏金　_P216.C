#include<stdio.h>

int main(void)
{
	int num[20][20], i, j, on, max, maxi, maxj;

	printf("Please input m: ");
	scanf("%d", &on);
	printf("Please input array:\n");
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	max = num[0][0];
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			if (num[i][j] > max)
			{
				max = num[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("\nmax=%d,i=%d,j=%d\n", max, maxi, maxj);
	printf("\n");
	return 0;
}
