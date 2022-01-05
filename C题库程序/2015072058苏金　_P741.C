#include<stdio.h>

int main(void)
{
	int n1, n2, i, j, find, count = 0;

	printf("Input the m, n: ");
	scanf("%d, %d", &n1, &n2);
	printf("\nThe result:\n");
	for (i=n1 ; count<n2 ; i++)
	{
		for (j=2 ; j<i ; j++)
		{
			if (i%j == 0)
			{
				find = 0;
			}
		}
		if (find != 0)
		{
			printf("%d ", i);
			count++;
		}
		if (find == 0)
		{
			find = 1;
		}
	}
	printf("\n");
	return 0;
}
