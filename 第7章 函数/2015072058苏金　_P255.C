#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int fmipo(int num[], int n, int nm);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	minPosA = fmipo(arrA, 5, num);  /* userCode(<50字符): 调用函数查找在arrA中大于num的最小数所在的下标 */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	minPosB = fmipo(arrB, 8, num);  /* userCode(<50字符): 调用函数查找在arrB中大于num的最小数所在的下标 */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fmipo(int num[], int n, int nm)
{
	int i, dmin = num[0], pos, find = 0;

	for (i=0 ; i<n ; i++)
	{
		if (dmin < num[i])
		{
			dmin = num[i];
		}

	}
	for (i=0 ; i<n ; i++)
	{
		if (nm<num[i] && num[i]<dmin)
		{
			dmin = num[i];
			pos = i;
			find = 1;
		}
	}
	if (find == 1)
	{
		return pos;
	}
	else
	{
		return - 1;
	}
}



