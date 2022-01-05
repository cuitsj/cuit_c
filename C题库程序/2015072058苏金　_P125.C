#include<stdio.h>

int main(void)
{
	char x1, x2, i;

	printf("Please Input two char: ");
	scanf("%c%c", &x1, &x2);
	if (x1 > x2)
	{
		printf("\nResult: ");
		for (i=x1 ; i>=x2 ; i--)
		{
			printf("%c", i);
		}
		printf("\n");
	}
	else
	{
		printf("\nResult: ");
		for (i=x2 ; i>=x1 ; i--)
		{
			printf("%c", i);
		}
		printf("\n");
	}
	return 0;
}
