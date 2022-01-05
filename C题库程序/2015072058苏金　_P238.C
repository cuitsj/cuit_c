#include<stdio.h>

int main(void)
{
	int i, j, num[5];
	
	printf("请输入5个数: ");
	for (i=0 ; i<5 ; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\n这5个数倒序为: ");
	for (j=i-1 ; j>=0 ; j--)
	{
		printf("%d ", num[j]);
	}
	printf("\n");
	return 0;
}

	

