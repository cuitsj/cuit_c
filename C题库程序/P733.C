#include<stdio.h>

int main(void)
{
	char i;

	printf("Input a character: ");
	scanf("%c", &i);
	printf("\nAscii('%c') = 0x%x\n", i, i);
	return 0;
}
