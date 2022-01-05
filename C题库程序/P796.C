#include<stdio.h>

int main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("Test.txt", "w");
	if (fp == NULL)
	{
		printf("\nCreate file error!\n");
		return 1;
	}
	printf("Input chars: ");
	ch = getchar();
	while (ch != '!')
	{
		if (ch>='a' && ch<='z')
		{
			ch -= 32;
		}
		if (fputc(ch, fp) == EOF)
		{
			printf("\nWriting file error!\n");
			fclose(fp);
			return 2;
		}
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
