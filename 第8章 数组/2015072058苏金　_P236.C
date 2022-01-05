#include<stdio.h>

int main(void)
{
	int num[20][20], i, j, on, sum = 0;

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
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			if (i==0 || i==2 || i==on-1)
			{
				sum += num[i][j];
			}
		}
	}
	printf("\nSum = %d\n", sum);
	printf("\n");
	return 0;
}
