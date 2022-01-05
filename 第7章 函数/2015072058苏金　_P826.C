#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */
int getInput(char str[128]);
void copyStr(char str[128], int n, char dststr[128]);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(考生在此后根据设计需要完成程序的其它部分，如函数的定义，行数不限) */
int getInput(char str[128])
{
	int i, m;

	printf("please input a string: ");
	do
	{
		for (i=0 ; str[i - 1]!='\n' ; i++)
		{
			scanf("%c", &str[i]);
		}
		str[i - 1] = '\0';
		if (i - 1 == 0)
		{
			printf("\nError Str, please input a string agagin: ");
		}
	} while (i - 1 == 0);
	printf("please input m: ");
	do
	{
		scanf("%d", &m);
		if (m<1 || m>i)
		{
			printf("\nError m, please input m again: ");
		}
	} while (m < 1 || m>i);
	return m;
}

void copyStr(char str[128], int n, char dststr[128])
{
	int i, j;
	
	for (i=n - 1, j=0 ; str[i] != '\0' ; i++, j++)
	{
		dststr[j] = str[i];
	}
	dststr[j] = '\0';
}





