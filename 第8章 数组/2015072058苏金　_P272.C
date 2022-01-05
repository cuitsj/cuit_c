#include<stdio.h>

int main(void)
{
	int i, di = 0, az = 0, AZ = 0, sy = 0;
	char str[128], dig[128], azl[128], AZL[128], sym[128];
	
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
			azl[az++] = str[i];
		}
		else if (str[i] >='A' && str[i]<='Z')
		{
			AZL[AZ++] = str[i];
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
	printf("\nazLetter string length = %d, azLetters: ", az);
	for (i=0 ; i<az ; i++)
	{
		printf("%c", azl[i]);
	}
	printf("\nAZLetter string length = %d, AZLetters: ", AZ);
	for (i=0; i<AZ ; i++)
	{
		printf("%c", AZL[i]);
	}
	printf("\nSymbol string length = %d, Symbols: ", sy);
	for (i=0 ; i<sy ; i++)
	{
		printf("%c", sym[i]);
	}
	return 0;
}

			



