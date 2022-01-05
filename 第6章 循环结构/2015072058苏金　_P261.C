#include<stdio.h>

int main(void)
{
	char c1, c2;

	printf("Please Input two char: ");
	scanf("%c%c", &c1, &c2);
	printf("\nResult: ");
	for (c1 ; c1>=c2 ; c1--)
	{
		printf(" %c%c,", c1, c1+1);
	}
	printf("\n");
	return 0;
}

