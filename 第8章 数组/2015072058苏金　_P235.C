#include<stdio.h>

int main(void)
{
	int i, j, sum = 0, m, num[20][20];

	printf("Please input m: ");
	scanf("%d", &m);
	printf("Please input array:\n");
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<m ; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<m ; j++)
		{
			if (j==0 || j==m-1)
			{
				sum += num[i][j];
			}
		}
	}
	printf("\nSum = %d\n", sum);
	return 0;
}
	
	
	
	