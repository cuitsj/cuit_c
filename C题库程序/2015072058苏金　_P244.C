#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int fx(int num[], int n, int searchVal);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请输入一个欲查找的数：");
	scanf("%d", &searchVal);

	positionA = fx(arrA, 5, searchVal);  /* userCode(<50字符): 调用函数查找searchVal在arrA中的下标 */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB = fx(arrB, 8, searchVal);  /* userCode(<50字符): 调用函数查找searchVal在arrB中的下标 */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fx(int num[], int n, int searchVal)
{
	int i, pi, find = 0;

	for (i=0 ; i<n ; i++)
	{
		if (num[i] == searchVal)
		{
			find = 1;
			pi = i;
			break;
		}
	}
	if (find == 0)
	{
		return -1;
	}
	else 
	{
		return pi;
	}
}



