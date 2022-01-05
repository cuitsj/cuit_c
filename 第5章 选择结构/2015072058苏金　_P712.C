#include<stdio.h>

int main(void)
{
	int i;

	printf("Please input an integer: ");
	scanf("%d", &i);
	if (i%5==0 && i%7==0)
	{
		printf("\nYes.\n");
	}
	else
	{
		printf("\nNo.\n");
	}
	return 0;
}