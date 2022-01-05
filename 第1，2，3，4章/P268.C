#include<stdio.h>

int main(void)
{
	int n1;
	char c1, c2;
	double d1, d2, d3;

	printf("请输入6个数据(依次为2字符、3实数、1整数): ");
	scanf("%c %c %lf %lf %lf %d", &c1, &c2, &d1, &d2, &d3, &n1);
	printf("\n这6个数据倒序为: 6-%d 5-%.5lf 4-%.5lf 3-%.5lf 2-%c 1-%c\n", n1, d3, d2, d1, c2, c1);
	return 0;
}
