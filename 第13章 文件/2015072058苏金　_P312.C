#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[20], ch1[20], ch2[12];
	long sl, flag = 0;
	float dj;

	printf("Please input shang pin pin ming:");
	gets(ch0);
	fp = fopen("sp.dat", "rb");
	if (fp == NULL)
	{
		return 0;
	}
	printf("\ncha zhao qing kuang:\n");
	while (fread(ch1, 20, 1, fp)==1&&fread(ch2, 12, 1, fp)==1&&fread(&sl, 4, 1, fp)==1&&fread(&dj, 4, 1, fp)==1)
	{
		if (strcmp(ch0, ch1) == 0)
		{
			printf("%s,%s,%ld,%.2f\n", ch0, ch2, sl, dj);
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


