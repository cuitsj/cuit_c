#include<stdio.h>

int main(void)
{
	char xm1[5], xm2[5];

	printf("请输入姓名1: ");
	gets(xm1);
	printf("请输入姓名2: ");
	gets(xm2);
	if (xm1[0] == xm2[0] && xm1[1] == xm2[1])
	{
		printf("\n“%s”与“%s”同姓。\n", xm1, xm2);
	}
	else
	{
		printf("\n“%s”与“%s”不同姓。\n", xm1, xm2);
	}
	return 0;
}

