#include<stdio.h>

int main(void)
{
	char cbegin;
	int icount;

	printf("Please Input a char and a number: ");
	scanf("%c %d", &cbegin, &icount);
	printf("\nResult: ");
	for (cbegin ; icount>0 ; cbegin++, icount--)
	{
		printf("%c", cbegin);
	}
	printf("\n");
	return 0;
}