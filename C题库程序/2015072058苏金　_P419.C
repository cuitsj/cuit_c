#include<stdio.h>

int main(void)
{
	int i = 0, j, k, num[100], temp;
	
	printf("Input: ");
	do
	{
		scanf("%d", &num[i++]);
	} while (num[i - 1] != -888 && i<100);
	if (num[i - 1] == -888)
	{
		k = i - 1;
	}
	else
	{
		k = i;
	}
	for (i=0 ; i<k-1 ; i++)
	{
		for (j=i+1 ; j<k ; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("\nResult: ");
	for (i=0 ; i<k ; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}

