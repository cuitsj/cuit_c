#include<stdio.h>

int main(void)
{
	int num[10000], i, j, k, temp;
	
	printf("Please input numbers: ");
	for (i=0 ; i<10000 ; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -222)
		{
			break;
		}
	}
	for (j=0 ; j<i-1 ; j++)
	{
		for (k=j + 1 ; k<i ; k++)
		{
			if (num[j] > num[k])
			{
				temp = num[j];
				num[j] = num[k];
				num[k] = temp;
			}
		}
	}
	printf("\nOutput:\n");
	for (j=0 ; j<i ; j++)
	{
		printf("%-6d", num[j]);
		if ((j + 1)%6==0 || j==i-1)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	printf("\n");
	return 0;
}


