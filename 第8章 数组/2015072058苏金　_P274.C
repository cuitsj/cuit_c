#include<stdio.h>

int main(void)
{
	static int wz[128], cs[128];
	int i, j;
	char str[128], zm[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	printf("请输入一行字符：");
	gets(str);
	printf("统计结果为：\n");
	for (i=0 ; str[i] != '\0' ; i++)
	{
		for (j=0 ; j<26 ; j++)
		{
			if (str[i] == zm[j] || str[i]-32 == zm[j])
			{
				cs[j]++;
				wz[j] = j;
			}
		}
	}
	for (i=0 ; i<26 ; i++)
	{
		if (cs[i] != 0)
		{
			printf("%c-%d\n", zm[wz[i]], cs[wz[i]]);
		}
	}
	return 0;
}

