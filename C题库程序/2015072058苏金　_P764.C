#include<stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	int ch1, ch2;

	if (argc != 3)
	{
		printf("    usage: P764  sourceFilename  destinationFilename\n");
		return 1;
	}
	fp1 = fopen(argv[1], "rb");
	if (fp1 == NULL)
	{
		printf("    source File (%s) Open Error!\n", argv[1]);
		return 2;
	}
	fp2 = fopen(argv[2], "wb");
	if (fp2 == NULL)
	{
		printf("    destination File (%s) Create Error!\n", argv[2]);
		fclose(fp1);
		return 3;
	}
	ch1 = fgetc(fp1);
	while (ch1 != EOF)
	{
		ch2 = fputc(ch1, fp2);
		if (ch2 == EOF)
		{
			printf("    writing destination File (%s) Error!\n", argv[2]);
			fclose(fp1);
			fclose(fp2);
			return 4;
		}
		ch1 = fgetc(fp1);
	}
	printf("    copy %s to %s successed!\n", argv[1], argv[2]);
	fclose(fp1);
	fclose(fp2);
	return 0;
}




	
