#include<stdio.h>

#include<string.h>

int main(void)
{
	char str1[128], str2[128], str3[128], max[128];

	printf("Please input the first string:\t");
	gets(str1);
	printf("Please input the second string:\t");
	gets(str2);
	printf("Please input the third string:\t");
	gets(str3);
	if (strcmp(str1, str2) > 0)
	{
		strcpy(max, str1);
	}
	else
	{
		strcpy(max, str2);
	}
	if (strcmp(max, str3) > 0)
	{
		printf("\n最大字符串是：%s\n", max);
	}
	else
	{	
		printf("\n最大字符串是：%s\n", str3);
	}
	return 0;
}


		
