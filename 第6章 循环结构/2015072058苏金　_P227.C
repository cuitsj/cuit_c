#include<stdio.h>

int main(void)
{
	int ibegin, iend;

	printf("Please Input two number: ");
	scanf("%d %d", &ibegin, &iend);
	printf("\nResult: ");
	for (ibegin ; ibegin>=iend ; ibegin--)
	{
		printf(" %d", ibegin);
	}
	printf("\n");
	return 0;
}
