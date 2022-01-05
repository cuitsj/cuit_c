#include<stdio.h>

int main(void)
{
	int num[10], i, zs = 0, fs = 0, all = 0;

	printf("Input 10 integers: ");
	for (i=0 ; i<10 ; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i=0 ; i<10 ; i++)
	{
		if (num[i] > 0)
		{
			zs += num[i];
		}
		else
		{
			fs += num[i];
		}
		all += num[i];
	}
	printf("\nzhengshu=%d,fushu=%d,all=%d\n", zs, fs, all);
	return 0;
}

