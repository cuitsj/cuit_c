#include <stdio.h>

#define maxNums 100

/* userCode(<50字符): 自定义函数之原型声明 */
float faver(int num[], int n);

int main(void)
{
	int i, count, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
	}
	count = i;

	avgScore = faver(scores, count);  /* userCode(<50字符): 调用函数计算平均成绩 */
	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
float faver(int num[], int n)
{
	int i, sum = 0;

	for (i=0 ; i<n ; i++)
	{
		sum += num[i];
	}
	return (float)sum / (float)n;
}
