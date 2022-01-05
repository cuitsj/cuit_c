#include<stdio.h>

#include<string.h>

int main(void)
{
	char str1[128], str2[128];
	int i, j, len;

	printf("Input a string: ");
	gets(str1);
	len = strlen(str1);
	for (i=0, j=len-1 ; i<len ; i++, j--)
	{
		str2[i] = str1[j];
	}
	str2[i] = '\0';
	printf("\nThe result is: %s\n", str2);
	return 0;
}