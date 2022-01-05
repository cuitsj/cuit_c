#include<stdio.h>

int main(void)
{
	int n1, n2, n3;
	char c1, c2;
	double d1, d2;

	printf("请输入7个数据(依次为3整数、2字符、2实数): ");
	scanf("%d %d %d %c %c %lf %lf", &n1, &n2, &n3, &c1, &c2, &d1, &d2);
	printf("\n这7个数据倒序为: 7-%.5lf 6-%.5lf 5-%c 4-%c 3-%d 2-%d 1-%d\n", d2, d1, c2, c1, n3, n2, n1);
	return 0;
}


