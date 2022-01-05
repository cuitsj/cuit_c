#include<stdio.h>

int main(void)
{
	int n1, n2, i, j, sum, count = 0;
	
	printf("Input 2 integer to determine the range: ");
	scanf("%d %d", &n1, &n2);
	printf("\nwanShu is: ");
	for (i=n1 ; i<=n2 ; i++)
	{
		sum = 0;
		for (j=1 ; j<i ; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			printf(" %d", sum);
			count++;
		}
		
	}
	printf("\n   Count = %d\n", count);
	return 0;
}



