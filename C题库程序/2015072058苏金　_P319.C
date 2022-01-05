#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[17], ch1[17], ch2[12];
	float dj;
	int sl = 0, flag = 0;

	printf("Please input shang pin pin ming:");
	gets(ch0);
	fp = fopen("sp36.dat", "rb");
	if (fp == NULL)
	{
		return 0;
	}
	printf("\ncha zhao qing kuang:\n");
	while (fread(ch1, 17, 1, fp)==1&&fread(ch2, 12, 1, fp)==1&&fread(&sl, 3, 1, fp)==1&&fread(&dj, 4, 1, fp)==1)
	{
		if (strcmp(ch0, ch1) == 0)
		{
			printf("%s,%s,%d,%.2f\n", ch0, ch2, sl, dj);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("mei you shang pin :%s\n", ch0);
	}
	fclose(fp);
	return 0;
}


