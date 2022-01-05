#include<stdio.h>

int main(void)
{
	int i, di = 0, le = 0, sy = 0;
	char str[128], dig[128], let[128], sym[128];
	
	printf("Please intput the string: ");
	gets(str);
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i] >='0' && str[i]<='9')
		{
			dig[di++] = str[i];
		}
		else if (str[i] >='a' && str[i]<='z')
		{
			let[le++] = str[i];
		}
		else
		{
			sym[sy++] = str[i];
		}
	}
	printf("\nDigistal string length = %d, Digitals: ", di);
	for (i=0 ; i<di ; i++)
	{
		printf("%c", dig[i]);
	}
	printf("\nLetter string length = %d, Letters: ", le);
	for (i=0 ; i<le ; i++)
	{
		printf("%c", let[i]);
	}
	printf("\nSymbol string length = %d, Symbols: ", sy);
	for (i=0 ; i<sy ; i++)
	{
		printf("%c", sym[i]);
	}
	return 0;
}

			



