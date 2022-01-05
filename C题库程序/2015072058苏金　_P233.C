#include<stdio.h>

int main(void)
{
	int num, i, gw, j, sw, bw, find;
	
	printf("Please Input a number: ");
	scanf("%d", &num);
	printf("\nResult: ");
	for (i=100 ; i<1000 ; i++)
	{
		gw = i % 10;
		j = i / 10;
		sw = j % 10;
		bw = i / 100;
		if (gw*sw*bw + sw*sw + gw*gw*gw == num)
		{
			printf(" %4d", i);
			find = 1;
		}
	}
	if (find != 1)
	{
		printf("not Find!");
	}
	printf("\n");
	return 0;
}


