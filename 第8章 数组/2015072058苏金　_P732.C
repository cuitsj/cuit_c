#include<stdio.h>

int main(void)
{
	int num[3][3], i, j, sum = 0;

	printf("Please input the 3x3 Matrix:\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			sum += num[i][j];
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}

