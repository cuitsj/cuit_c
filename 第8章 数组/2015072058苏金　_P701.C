#include<stdio.h>

int main(void)
{
	int i, search, position, find = 0, num[11];
	
	printf("please input 10 numbers: ");
	for (i=1 ; i<=10 ; i++)
	{
		scanf("%d", &num[i]);
		if (num[i - 1] >= num[i] && i > 1)
		{
			i--;
		}
	}
	for (i=1 ; i<=10 ; i++)
	{
		printf("%5d", num[i]);
		if (i < 10)
		{
			printf(",");
		}
	}
	printf("\ninput the num to look for: ");
	scanf("%d", &search);
	for (i=1 ; i<=10 ; i++)
	{
		if (num[i] == search)
		{
			position = i;
			find = 1;
			break;
		}
	}
	if (find == 1)
	{
		printf("\nthe position of %d is %d\n", search, position);
	}
	else
	{
		printf("\nNot Find!\n");
	}
	return 0;
}





