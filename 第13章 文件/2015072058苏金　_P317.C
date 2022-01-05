#include<stdio.h>

int main(void)
{
	FILE *fp1, *fp2;
	char str1[100], str2[100];
	int ch1, ch2;

	printf("Please input sourceFilename: ");
	gets(str1);
	printf("Please input destinationFilename: ");
	gets(str2);

	fp1 = fopen(str1, "rb");
	if (fp1 == NULL)
	{
		printf("\nsource File (%s) Open Error!\n", str1);
		return 2;
	}
	fp2 = fopen(str2, "wb");
	if (fp2 ==	NULL)
	{
		printf("\ndestination File (%s) Create Error!\n", str2);
		fclose(fp1);
		return 3;
	}
	ch1 = fgetc(fp1);
	while (ch1 != EOF)
	{
		ch2 = fputc(ch1, fp2);
		if (ch2 == EOF)
		{
			printf("\nwriting destination File (%s) Error!\n", str2);
			fclose(fp1);
			fclose(fp2);
			return 4;
		}
		ch1 = fgetc(fp1);
	}
	printf("\ncopy %s to %s successed!\n", str1, str2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}









