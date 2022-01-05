#include<stdio.h>

#include<string.h>

int main(void)
{
	char str[128];
	int i, len;

	printf("Please input string: ");
	gets(str);
	len = strlen(str);
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i]>='A' && str[i]<='Z') 
		{
			str[i] = str[i] + 25 - (str[i] - 65)*2;
		}
		else if (str[i]>='a' && str[i]<='z')
		{
			str[i] = str[i] + 25 - (str[i] - 97)*2;
		}
	} 
	str[i] = '\0';
	printf("\nzi fu chuan chang du: %d", len);
	printf("\nmi wen: %s\n", str);
	return 0;
}