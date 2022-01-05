#include<stdio.h>

int main(void)
{
	int i;
	char ch[6], max;
	
	printf("请输入5个字符: ");
	gets(ch);
	max = ch[0];
	for (i=0 ; i<5 ; i++)
	{
		if (max <= ch[i])
		{
			max = ch[i];
		}
	}
	printf("\n最大的字符是 %c-%d\n", max, max);
	return 0;
}


