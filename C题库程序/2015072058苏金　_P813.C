#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double f(int i);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = f(n);  /* userCode(<50字符): 调用函数计算fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double f(int i)
{
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else if (i == 2)
	{
		return 2;
	}
	else
	{
		return (2*f(i - 1) + f(i - 2)*f(i - 3));
	}
}

