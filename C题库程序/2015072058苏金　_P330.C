#include<stdio.h>

int main(void)
{
	FILE *fp;
	char str[127];
	int ch;

	printf("input the file's name: ");
	gets(str);
	fp = fopen(str, "r");
	if (fp == NULL)
	{
		return 0;
	}
	printf("------------------------File Begin:----------------------\n");
	ch = fgetc(fp);
	while (ch != EOF)
	{
		if (ch == '*')
		{
			putchar('@');
		}
		else
		{
			putchar(ch);
		}
		ch = fgetc(fp);
	}
	printf("\n------------------------ File End. ----------------------\n");
	fclose(fp);
	return 0;
}
