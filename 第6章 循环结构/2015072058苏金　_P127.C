#include<stdio.h>

int main(void)
{
	int i;
	char op;
	
	printf("Please Input a char and a number: ");
	scanf("%c%d", &op, &i);
	printf("\nResult:");
	while (i > 0)
	{
		printf("%c", op);
		op = op - 1;
		i--;
	}
	printf("\n");
	return 0;
}