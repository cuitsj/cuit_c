#include<stdio.h>

int main(void)
{
	int i, j, on;

	printf("Please input an integer: ");
	scanf("%d", &on);
	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ; j++)
		{
			printf("%4d", on + i +j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}