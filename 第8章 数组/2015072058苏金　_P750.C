#include<stdio.h>

#include<string.h>

int main(void)
{
	char str[101];
	int i, j, len;
	
	printf("Please input a string: ");
	gets(str);
	len = strlen(str);
	for (i=0 ; i<len ; i++)
	{
		do
		{
			if (str[i] == '*')
			{
				for (j=i ; j<len ; j++)
				{
					str[j] = str[j+1];
				}
			}
		} while (str[i] == '*');
	}
	printf("\nThe result is: %s\n", str);
	return 0;
}

