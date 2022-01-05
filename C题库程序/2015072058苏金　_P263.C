#include <stdio.h>

/* userCode(<60字符): 自定义函数之原型声明 */
void fun(int arr[], int n, int *sum, int *gt);

int main(void)
{
	int arr1[6], arr2[10], arr3[15], gt60A, gt60B, gt60C, sumA, sumB, sumC;
	
	fun(arr1, 6, &sumA, &gt60A);  /* userCode(<60字符): 调用函数读 6个数到arr1中，并计算和及>60的个数 */
	fun(arr2, 10, &sumB, &gt60B);  /* userCode(<60字符): 调用函数读10个数到arr2中，并计算和及>60的个数 */
	fun(arr3, 15, &sumC, &gt60C);  /* userCode(<60字符): 调用函数读15个数到arr3中，并计算和及>60的个数 */

	printf("\narr1[0]=%3d, arr1[ 5]=%3d, sum(arr1)=%d, cnt(arr1)=%d", arr1[0], arr1[5], sumA, gt60A);
	printf("\narr2[0]=%3d, arr2[ 9]=%3d, sum(arr2)=%d, cnt(arr2)=%d", arr2[0], arr2[9], sumB, gt60B);
	printf("\narr3[0]=%3d, arr3[14]=%3d, sum(arr3)=%d, cnt(arr3)=%d\n", arr3[0], arr3[14], sumC, gt60C);
	
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void fun(int arr[], int n, int *sum, int *gt)
{
	int i;

	*sum = 0;
	*gt = 0;
	printf("请输入%d个数: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		*sum += arr[i];
	}
	for (i=0; i<n; i++)
	{
		if (arr[i] > 60)
		{
			*gt += 1;
		}
	}
}


		

