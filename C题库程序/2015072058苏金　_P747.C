#include<stdio.h>

int main(void)
{
	int ai[15], i, j, find, a1;
	
	printf("please input 15 integer numbers:\n");
	for (i=0 ; i<=14 ; i++)
	{
		scanf("%d", &ai[i]);
	}
	printf("please input the integer you want to find: ");
	scanf("%d", &a1);
	for (j=0 ; j<=14 ; j++)
	{
		if (a1 == ai[j])
		{
			printf("\n%d has been found,it is a[%d]\n", a1, j);
			find = 1;
		}
	}
	if (find != 1)
	{
		printf("\n%d has not been found\n", a1);
	}
	return 0;
}


