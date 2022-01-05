#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[9], ch1[9], ch2[11], ch3[9];
	int line = 0, flag = 0;

	printf("请输入要查找的违章类型：");
	gets(ch0);
	fp = fopen("jtwz.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 0;
	}
	printf("\n查找结果为：\n");
	while (fscanf(fp, "%s %s  %s\n", ch1, ch2, ch3) == 3)
	{
		if (strcmp(ch0, ch3) == 0)
		{
			line++;
			printf("%d %s, %s, %s\n", line, ch1, ch2, ch0);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("文件中没有找到“%s”的记录\n", ch0);
	}
	fclose(fp);
	return 0;
}
