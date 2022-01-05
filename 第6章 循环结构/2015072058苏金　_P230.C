#include<stdio.h>

int main(void)
{
	int ibegin, icount;

	printf("Please Input two number: ");
	scanf("%d %d", &ibegin, &icount);
	printf("\nResult: ");
	for (ibegin ; icount>0 ; icount--)
	{
		printf(" %d", ibegin);
		ibegin += 5;
	}
	printf("\n");
	return 0;
}