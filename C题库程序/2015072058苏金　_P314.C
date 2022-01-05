#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[21], ch1[21], ch2[11];
	double dj;
	int sl, flag = 0;

	printf("Please input shang pin pin ming:");
	gets(ch0);
	fp = fopen("sp.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	printf("\ncha zhao qing kuang:\n");
	while (fscanf(fp, "%s %s %lf %d\n", ch1, ch2, &dj, &sl) == 4)
	{
		if (strcmp(ch0, ch1) == 0)
		{
			printf("%s,%s,%d,%.2lf\n", ch1, ch2, sl, dj);
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