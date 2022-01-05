#include<stdio.h>

#include<string.h>

int main(void)
{
	FILE *fp;
	char ch0[15], ch1[9], ch2[3], ch3[15];
	int xh, cj, rs = 0, sum =0, flag = 0;

	printf("请输入要计算平均成绩的课程名称：");
	gets(ch0);
	fp = fopen("xscj.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	printf("\n计算结果为：\n");
	while (fscanf(fp, "%d %s %s %s %d\n", &xh, ch1, ch2, ch3, &cj) == 5)
	{
		if (strcmp(ch0, ch3) == 0)
		{
			rs++;
			sum += cj;
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("课程“%s”有 %d 人选学，平均成绩为 %.1lf\n", ch0, rs, (double)sum/(double)rs);
	}
	else if (flag == 0)
	{
		printf("文件中没有名称为“%s”的课程\n", ch0);
	}
	fclose(fp);
	return 0;
}

