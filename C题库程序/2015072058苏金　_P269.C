#include<stdio.h>

int main(void)
{
	int n1, n2;

	printf("Please Input two number: ");
	scanf("%d %d", &n1, &n2);
	printf("\nResult: ");
	for (n1 ; n1>=n2 ; n1--)
	{
		printf(" %d/%d", n1, n1 + 1);
	}
	printf("\n");
	return 0;
}


