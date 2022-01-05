#include<stdio.h>

int main(void)
{
	FILE *fp;
	char op;
	int x1, x2, line = 0;

	fp = fopen("Comp.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	while (fscanf(fp, "%d %c %d\n", &x1, &op, &x2) == 3)
	{
		line++;
		if (op == '+')
		{
			printf("Line %03d:  %5d + %-5d = %-6d\n", line, x1, x2, x1 + x2);
		}
		else
		{
			printf("Line %03d:  %5d - %-5d = %-6d\n", line, x1, x2, x1 - x2);
		}
	}
	fclose(fp);
	return 0;
}




	