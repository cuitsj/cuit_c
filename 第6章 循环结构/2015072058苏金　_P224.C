#include<stdio.h>

int main(void)
{
	int num, i, sum = 1;

	printf("Please input n: ");
	scanf("%d", &num);
	for (i=num-1 ; i>0 ; i--)
	{
		sum = (sum + 1)*2;
	}
	printf("\ntotal=%d\n", sum);
	return 0;
}