#include<stdio.h>

int main(void)
{
	char i;

	printf("Input a lowercase letter: ");
	scanf("%c", &i);
	printf("\n%c(%d)\n", i, i);
	printf("%c(%d)\n", i - 32, i - 32);
	return 0;
}
