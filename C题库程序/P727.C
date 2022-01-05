#include<stdio.h>

int main(void)
{
	int i, j;

	printf("please input data: ");
	scanf("%d %d", &i, &j);
	printf("\nResult: %d + %d = %d\n", i, j, i + j);
	return 0;
}
