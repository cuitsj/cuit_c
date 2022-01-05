#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	int x1, x2;

	if (argc != 4)
	{
		printf("    usage: P115  num1 op num2\n");
		return 1;
	}
	else
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[3]);
		switch (*argv[2])
		{
			case '+':
				{
					printf("	%d + %d = %d", x1, x2, x1 + x2);
					return 0;
				}
			case '-':
				{
					printf("	%d - %d = %d", x1, x2, x1 - x2);
					return 0;
				}
			case '*':
				{
					printf("	%d * %d = %d", x1, x2, x1 * x2);
					return 0;
				}
			case '/':
				{
					printf("	%d / %d = %.2f", x1, x2, (double)x1 / (double)x2);
					return 0;
				}
			case '%':
				{
					printf("	%d %% %d = %d", x1, x2, x1 % x2);
					return 0;
				}
			default:
				{
					printf("    op(%s) Error!\n", argv[2]);
					return 2;
				}
		}
	}
}



