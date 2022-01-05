#include<stdio.h>

int main(void)
{
	FILE *fp;
	int x1, x2;
	char op;

	fp = fopen("Comp.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	fscanf(fp, "%d %c %d\n", &x1, &op, &x2);
	if (op == '+')
	{
		printf("%d + %d = %d\n", x1, x2, x1 + x2);
	}
	else
	{
		printf("%d - %d = %d\n", x1, x2, x1 - x2);
	}
	fclose(fp);
	return 0;
}