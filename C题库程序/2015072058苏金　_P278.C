#include<stdio.h>

int main(void)
{
	int n1, n2, i;
	
	printf("Please Input two number: ");
	scanf("%d %d", &n1, &n2);
	printf("\nResult: ");
	for (i=1 ; i<=n2 ; i++)
	{
		printf(" %d-%d", i, n1);
		n1 -= 1;
	}
	printf("\n");
	return 0;
}
