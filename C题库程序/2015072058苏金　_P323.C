#include<stdio.h>

int main(void)
{
	FILE *fp;
	char op1, op2;
	int x1, x2, x3;
	
	fp = fopen("Comp.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	fscanf(fp, "%d %c %d %c %d\n", &x1, &op1, &x2, &op2, &x3);
	if (op1 == '*')
	{
		if (op2 == '+')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 * x2 + x3);
		}
		else if (op2 == '*')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 * x2 * x3);
		}
		else
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 * x2 - x3);
		}
	}
	else if (op1 == '+')
	{
		if (op2 == '+')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 + x2 + x3);
		}
		else if (op2 == '*')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 + x2 * x3);
		}
		else
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 + x2 - x3);
		}
	}
	else
	{
		if (op2 == '+')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 - x2 + x3);
		}
		else if (op2 == '*')
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 - x2 * x3);
		}
		else
		{
			printf("%d %c %d %c %d = %d\n", x1, op1, x2, op2, x3, x1 - x2 - x3);
		}
	}
	return 0;
}
		
		
		
		
		
