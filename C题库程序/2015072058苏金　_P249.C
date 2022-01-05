#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int dss(int num[], int n, int nm);

int main(void)
{
	int arrA[5], arrB[8], num, countA, countB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	countA = dss(arrA, 5, num);  /* userCode(<50字符): 调用函数查找arrA中大于num的元素个数 */
	printf("\nCount(arrA) = %d", countA);
	countB =  dss(arrB, 8, num);  /* userCode(<50字符): 调用函数查找arrB中大于num的元素个数 */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int dss(int num[], int n, int nm)
{
	int i, gs = 0, max = nm;

	for (i=0 ; i<n ; i++)
	{
		if (max < num[i])
		{
			gs++;
		}
	}
	return gs;
}



