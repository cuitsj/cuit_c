#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void swap(float *n1, float *n2);

int main(void)
{
	float numA, numB;

	printf("please input numA, numB: ");
	scanf("%f,%f", &numA, &numB);

	swap(&numA, &numB);  /* userCode(<40字符): 调用函数实现numA和numB值的交换 */
	printf("\nnumA=%.3f, numB=%.3f\n", numA, numB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void swap(float *n1, float *n2)
{
	float temp;

	temp = *n1;
	*n1 =  *n2;
	*n2 = temp;
}

