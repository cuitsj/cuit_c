#include<stdio.h>

int main(void)
{
	int i, j, n;
	
	printf("Please input n: ");
	scanf("%d", &n);
	for (i = 1 ; i <= 2*n + 1 ; i++)
	{
		for (j = 1 ; j <= 2*n + 1 ; j++)
		{
			if (i+j>=n+2 && j-i<=n && i-j<=n && i+j<=3*n+2)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

