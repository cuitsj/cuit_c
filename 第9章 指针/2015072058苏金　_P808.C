#include <stdio.h>
#include <string.h>

#define N 128

void conj(char *string1, char *string2);

int main(void)
{
	char str1[N * 2], str2[N];

	printf("Please input string1:");
	gets(str1);
	printf("Please input string2:");
	gets(str2);

	/* 本部分代码功能建议：调用函数conj()完成str1和str2的合并 */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
	conj(str1, str2);
	/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

	printf("\nstring1:%s\n", str1);

	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数conj，行数不限) */
void conj(char *string1, char *string2)
{
	char str[256] = {'\0'};
	int i, j, len1, len2;

	len1 = strlen(string1);
	len2 = strlen(string2);
	for (i=0, j=0; len1>0||len2>0; i++)
	{
		if (len1 > 0)
		{
			str[j] = string1[i];
			j++;
			len1--;
		}
		if (len2 > 0)
		{
			str[j] = string2[i];
			j++;
			len2--;
		}
	}
	strcpy(string1, str);
}
