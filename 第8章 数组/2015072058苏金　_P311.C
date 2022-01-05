#include<stdio.h>

#include<string.h>

int main(void)
{
	char str1[128], str2[128], str3[256];
	int i, j, len1, len2;
	
	printf("Please input string1:");
	gets(str1);
	printf("Please input string2:");
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 >= len2)
	{
		for (i=0, j=0 ; j<len2 ; i++, j++)
		{
			str3[i] = str1[j];
			i++;
		}
		for (j=len2 ; j<len1 ; j++, i++)
		{
			str3[i] = str1[j];
		}
		for (i=1, j=0 ; j<len2 ; i++, j++)
		{
			str3[i] = str2[j];
			i++;
		}
		str3[i+len1-len2-1] = '\0';
	}
	else
	{
		for (i=0, j=0 ; j<len1 ; i++, j++)
		{
			str3[i] = str1[j];
			i++;
		}
		for (i=1, j=0 ; j<len1 ; i++, j++)
		{
			str3[i] = str2[j];
			i++;
		}
		for (i=2*len1, j=len1 ; j<len2 ; i++, j++)
		{
			str3[i] = str2[j];
		}
		str3[i] = '\0';
	}
	printf("\nstring1:%s\n", str3);
	return 0;
}