#include <stdio.h>
#include <string.h>

/* myswap完成字符串str内容的反转，返回字符串str的地址 */
char *myswap(char *str);
/* merge完成字符串strA,strB顺序交叉合并至strC，返回字符串strC的地址 */
char *merge(char *strA, char *strB, char *strC); 

int main(void)
{
	char s1[100], s2[100], s3[200];

	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);

	printf("\nstring s1 reversed: %s", myswap(s1));
	printf("\nstring s2 reversed: %s", myswap(s2));
	printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(考生在此后完成自定义函数的设计，行数不限) */
char *myswap(char *str)
{
	char ch[100] = {'\0'};
	int i, j, len;

	len = strlen(str);
	for (i=len-1, j=0; i>=0; i--, j++)
	{
		ch[j] = str[i];
	}
	strcpy(str, ch);
	return str;
}

char *merge(char *strA, char *strB, char *strC)
{
	int i, j, len1, len2;

	len1 = strlen(strA);
	len2 = strlen(strB);
	for (i=0, j=0; len1>0||len2>0; i++)
	{
		if (len1 > 0)
		{
			strC[j] = strA[i];
			j++;
			len1--;
		}
		if (len2 > 0)
		{
			strC[j] = strB[i];
			j++;
			len2--;
		}
	}
	strC[j] = '\0';
	return strC;
}
