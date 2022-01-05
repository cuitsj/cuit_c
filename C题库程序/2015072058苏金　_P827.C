#include<stdio.h>

#include<string.h>

int main(void)
{
	char str1[128], str2[128], str3[128];
	int len1, len2, len3, max;

	printf("Please input the first string:\t");
	gets(str1);
	printf("Please input the second string:\t");
	gets(str2);
	printf("Please input the third string:\t");
	gets(str3);
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = strlen(str3);
	max = len1 > len2 ? len1 : len2;
	max = max > len3 ? max : len3;
	printf("\n最长的字符串长度为：%d\n", max);
	return 0;
}