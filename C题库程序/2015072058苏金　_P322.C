#include<stdio.h>

int main(void)
{
	FILE *fp;
	char op, str[200];
	int x1, x2, line = 0;
	
	fp = fopen("Comp.txt", "r");
	if (fp ==	NULL)
	{
		return 0;
	}
	while (fgets(str, 200, fp) != NULL)
	{
		line++;
		if (fscanf(str, "%d %c %d", &x1, &op, &x2) == 3)
		{
			if (op == '+')
			{
				printf("Line %03d:  %5d + %-5d = %-6d\n", line, x1, x2, x1 + x2);
			}
			else if (op == '-')
			{
				printf("Line %03d:  %5d - %-5d = %-6d\n", line, x1, x2, x1 - x2);
			}
			else
			{
				printf("Line %03d: Error!\n", line);
			}
		}
		else if (fscanf(str, "%d %c %d", &x1, &op, &x2) == EOF)
		{

		}
		else
		{
			printf("Line %03d: Error!\n", line);
		}
	}
	return 0;
}




