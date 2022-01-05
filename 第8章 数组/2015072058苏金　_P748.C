#include<stdio.h>

int main(void)
{
	int num[14][14], on, i, j, sum1 = 0, sum2 = 0;
	
	printf("Enter n: ");
	scanf("%d", &on);
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			num[i][j] = (i + j)*on;
		}
	}
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			printf("%4d", num[i][j]);
		}
		printf("\n");
	}
	for (i=0 ; i<on ; i++)
	{
		for (j=0 ; j<on ; j++)
		{
			if (i!=0 && j!=0 && i!=on-1 && j!=on-1)
			{
				sum1 += num[i][j];
			}
			if (i == j)
			{
				sum2 += num[i][j];
			}
		}
	}
	printf("\nsum1=%d\nsum2=%d\n", sum1, sum2);
	return 0;
}

