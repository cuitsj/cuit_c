#include<stdio.h>

int main(void)
{
	int i, max, num[4];
	
	printf("请输入4个整数: ");
	for (i=0 ; i<4 ; i++)
	{
		scanf("%d,", &num[i]);
	}
	max = num[0];
	for (i=0 ; i<4 ; i++)
	{
		if (max <= num[i])
		{
			max = num[i];
		}
	}
	printf("\n最大的数是 %d\n", max);
	return 0;
}

