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
	for (i=0, j=0 ; len1>0||len2>0 ; i++)
	{
		if (len1 > 0)
		{
			str3[j] = str1[i];
			len1--;
			j++;
		}
		if (len2 > 0)
		{
			str3[j] = str2[i];
			len2--;
			j++;
		}
	}
	str3[j] = '\0';
	printf("\nstring1:%s\n", str3);
	return 0;
}
