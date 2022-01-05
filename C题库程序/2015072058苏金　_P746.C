#include<stdio.h>

int main(void)
{
	int i, j, temp, num[10];
	
	printf("please input 10 integer numbers: ");
	for (i=0 ; i<10 ; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\nthe array before sorted: ");
	for (i=0 ; i<10 ; i++)
	{
		printf("%3d", num[i]);
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
	printf("\nthe array after  sorted: ");
	for (i=0 ; i<10 ; i++)
	{
		printf("%3d", num[i]);
	}
	return 0;
}
