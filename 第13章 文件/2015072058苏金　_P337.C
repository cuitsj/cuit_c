#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[9], ch1[9], ch2[3], ch3[15];
	int xh, cj, line = 0, flag = 0;

	printf("请输入要查找成绩的学生姓名：");
	gets(ch0);
	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 0;
	}
	printf("\n查找结果为：\n");
	while (fscanf(fp, "%d %s %s %s %d\n", &xh, ch1, ch2, ch3, &cj) == 5)
	{
		if (strcmp(ch0, ch1) == 0)
		{
			line++;
			printf("%d %d, %-8s, %s, %-14s, %d\n", line, xh, ch1, ch2, ch3, cj);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("文件中没有找到姓名为“%s”的学生\n", ch0);
	}
	fclose(fp);
	return 0;
}
