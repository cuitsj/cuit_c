#include<stdio.h>

int main(void)
{
	int num[16], i, j;

	printf("请输入若干个数: ");
	for (i=0 ; i<16 ; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1)
		{
			break;
		}
	}
	printf("\n这些数倒序为: ");
	for (j=i-1 ; j>=0 ; j--)
	{
		printf(" %d", num[j]);
	}
	printf("\n");
	return 0;
}