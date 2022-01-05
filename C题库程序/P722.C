#include<stdio.h>

int main(void)
{
	int i, j, k;

	printf("please input a date: ");
	scanf("%d-%d-%d", &i, &j, &k);
	printf("\nthe date is:	%d/%02d/%02d\n", i, j, k);
	return 0;
}
