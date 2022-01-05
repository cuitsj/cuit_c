#include<stdio.h>

int main(void)
{
	static int cs[10];
	int i, j; 
	char str[128], num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	printf("请输入一行字符：");
	gets(str);
	for (i=0 ; str[i] != '\0' ; i++)
	{
		for (j=0 ; j<10 ; j++)
		{
			if (str[i] == num[j])
			{
				cs[j]++;
			}
		}
	}
	printf("统计结果为：\n");
	for (i=0 ; i<10 ; i++)
	{
		if (cs[i] != 0)
		{
			printf("%c-%d\n", num[i], cs[i]);
		}
	}
	return 0;
}

