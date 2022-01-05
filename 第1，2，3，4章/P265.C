#include<stdio.h>

int main(void)
{
	int n1, n2, n3;
	char c1, c2;
	double d1, d2;

	printf("请输入7个数据(依次为2实数、3整数、2字符): ");
	scanf("%lf %lf %d %d %d %c %c", &d1, &d2, &n1, &n2, &n3, &c1, &c2);
	printf("\n这7个数据倒序为: 7-%c 6-%c 5-%d 4-%d 3-%d 2-%.7lf 1-%.7lf\n", c2, c1, n3, n2, n1, d2, d1);
	return 0;
}
