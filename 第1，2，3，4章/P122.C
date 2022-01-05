#include<stdio.h>

int main(void)
{
	int num1, num2;
	double num3, num4, num5;

	printf("请输入4个数：");
	scanf("%d %d %lf %lf", &num1, &num2, &num3, &num4);
	num5 = num1 % num2*num3 + num4;
	printf("\n计算结果为：%016.7f\n", num5);
	return 0;
}

