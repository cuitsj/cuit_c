#include<stdio.h>

int main(void)
{
	int i, j, temp, num[10];
	
	printf("Please input 10 number:\n");
	for (i=0 ; i<10 ; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i=0; i<9 ; i++)
	{
		for (j=i+1 ; j<10 ; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i=0 ; i<10 ; i++)
	{
		printf("%5d", num[i]);
	}
	return 0;
}
