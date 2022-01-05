#include<stdio.h>

int  main(void)
{
	int i, j, k = 0, mi, find = 1, flag = 0, over, ss[101];
	
	printf("input a number: ");
	scanf("%d", &mi);
	if (mi <= 0)
	{
		flag = 1;
		printf("error\n");
	}
	else
	{
		for (i=2 ; i<mi ; i++)
		{
			for (j=2 ; j<i ; j++)
			{
				if (i % j == 0)
				{
					find = 0;
					break;
				}
			}
			if (find == 1)
			{
				ss[k++] = i;
			}
			if (find == 0)
			{
				find = 1;
			}
			if (k > 100)
			{
				over  = 1;
				break;
			}
		}
	}
	if (over == 1)
	{
		printf("overflow\n");
	}
	else if (over != 1 && flag == 0)
	{
		printf("n=%d\n\n", k);
		for (i=0 ; i<k ; i++)
		{
			printf("%5d", ss[i]);
			if ((i + 1) % 15 == 0 && i != 0)
			{
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}




