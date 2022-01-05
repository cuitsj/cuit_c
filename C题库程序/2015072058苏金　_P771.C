#include<stdio.h>

int main(void)
{
	char str[128];
	int i, sum = 0, max = 0;
	
	printf("please input a string:\n");
	gets(str);
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i] != ' ')
		{
			sum++;
		}
		else
		{
			if (sum > max)
			{
				max = sum;
			}
			sum = 0;
		}
	}
	if (sum > max)
	{
		max = sum;
	}
	printf("\nmax_length of the string is: %d\n", max);
	return 0;
}
