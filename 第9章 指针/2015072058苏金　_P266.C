#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void fun(float arr[], int n, float *sum, int *gt);

int main(void)
{
	float arr1[6], arr2[8], arr3[12], sumA, sumB, sumC;
	int gt70A, gt70B, gt70C;
	
	fun(arr1, 6, &sumA, &gt70A);  /* userCode(<80字符): 调用函数读 6个数到arr1中，并计算和及>70的个数 */
	fun(arr2, 8, &sumB, &gt70B);  /* userCode(<80字符): 调用函数读 8个数到arr2中，并计算和及>70的个数 */
	fun(arr3, 12, &sumC, &gt70C);  /* userCode(<80字符): 调用函数读12个数到arr3中，并计算和及>70的个数 */

	printf("\narr1[ 5]=%4.1f, sum(arr1)=%5.1f, cnt(arr1)=%d",   arr1[5],  sumA, gt70A);
	printf("\narr2[ 7]=%4.1f, sum(arr2)=%5.1f, cnt(arr2)=%d",   arr2[7],  sumB, gt70B);
	printf("\narr3[11]=%4.1f, sum(arr3)=%5.1f, cnt(arr3)=%d\n", arr3[11], sumC, gt70C);
	
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void fun(float arr[], int n, float *sum, int *gt)
{
	int i;

	*sum = 0;
	*gt = 0;
	printf("请输入%2d个数: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%f", &arr[i]);
		*sum += arr[i];
	}
	for (i=0; i<n; i++)
	{
		if (arr[i] > 70)
		{
			*gt += 1;
		}
	}
}
	
