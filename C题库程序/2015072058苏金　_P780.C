#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int fstr(char str[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";

	printf("input a string: ");
	Len = fstr(String);  /* userCode(<50字符): 调用函数实现输入并统计输入字符个数 */

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fstr(char str[])
{
	int i = 0, ch;

	ch = scanf("%c", &str[i]);
	while (str[i]!='\n' && ch != EOF && ch != 0 && i<100)
	{
		i++;
		ch = scanf("%c", &str[i]);
	}
	str[i + 1] = '\0';
	return i;
}
