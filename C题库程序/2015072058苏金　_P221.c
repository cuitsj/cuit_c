#include<stdio.h>

#include<string.h>

int main(void)
{
	char str[128];
	int i, j, len, flag = 1;
	
	printf("Please input string: ");
	gets(str);
	len = strlen(str);
	for (i=0 , j=len-1 ; i<j ; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		printf("\n%s shi hui wen.\n", str);
	}
	else
	{
		printf("\n%s bu shi hui wen.\n", str);
	}
	return 0;
}
