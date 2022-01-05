#include <stdio.h>

int shuru(int num[]);  /* userCode(<50字符): 自定义函数1之原型声明 */
void nixu(int num[], int n);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16], count;

	printf("请输入若干个数: ");
	count = shuru(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	nixu(num, count);  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int shuru(int num[])
{
	int i = 0;

	while (num[i - 1] != -1 && i < 16)
	{
		scanf("%d", &num[i]);
		i++;
	}
	if (num[i - 1] == -1)
	{
		return i - 1;
	}
	else
	{
		return i;
	}
}

void nixu(int num[], int n)
{
	int i;

	for (i=n - 1 ; i>=0 ; i--)
	{
		printf("%d ", num[i]);
	}
}

