#include <stdio.h>

#define MAX 20

/* userCode(<80字符): 自定义函数之原型声明 */
void f(int num[][MAX], int num2[][MAX], int m);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	f(arrayA, arrayB, m);  /* userCode(<60字符): 调用函数实现数组内容变换 */
	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void f(int num1[][MAX], int num2[][MAX], int m)
{
	int i, j;

	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<m ; j++)
		{
			num2[i][j] = num1[i][j];
		}
	}
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<m ; j++)
		{
			if (i == 0)
			{
				num2[j][m - 1] = num1[i][j];
			}
			else if (i == m - 1)
			{
				num2[j][0] = num1[i][j];
			}
		}
	}
}





