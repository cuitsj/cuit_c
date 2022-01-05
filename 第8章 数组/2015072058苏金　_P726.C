#include<stdio.h>

int main(void)
{
	char str1[101];
	int ch, i = 0;

	printf("input a string: ");
	ch = getchar(); 
	while (ch != '\n' && ch != EOF && i<100)
	{
		str1[i] = ch;
		i++;
		ch = getchar(); 
	}
	str1[i] = '\0';
	printf("\nThe string lenth is: %d", i);
	printf("\nThe string is: %s\n", str1);
	return 0;
}

	
		