#include<stdio.h>

int main(void)
{
	FILE *fp1, *fp2, *fp3;
	char op;
	int x1, x2, line = 0;

	fp1 = fopen("Comp.txt", "r");
	fp2 = fopen("CompA.txt", "r");
	fp3 = fopen("CompB.txt", "r");
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		return 0;
	}
	while (fscanf(fp1, "%d\n", &x1) + fscanf(fp2, "%c\n", &op) + fscanf(fp3, "%d\n", &x2)==3)
	{
		line++;
		if (op == '+')
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", line, x1, op, x2, x1 + x2);
		}
		else
		{
			printf("Line %03d:  %5d %c %-5d = %-6d\n", line, x1, op, x2, x1 - x2);
		}
	}
	return 0;
}

