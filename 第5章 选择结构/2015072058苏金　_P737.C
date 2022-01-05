#include<stdio.h>

#include<math.h>

int main(void)
{
	int num1, num2, num3;

	printf("Input 3 numbers:");
	scanf("%d,%d,%d", &num1, &num2, &num3);
	if (fabs(num1) > fabs(num2))
	{
		num2 = num1;
		if (fabs(num2) > fabs(num3))
		{
			printf("The number with maximum absolute value is %d.\n", num2);
		}
		else
		{
			printf("The number with maximum absolute value is %d.\n", num3);
		}
	}
	else if (fabs(num2) > fabs(num3))
	{
		printf("The number with maximum absolute value is %d.\n", num2);
	}
	else
	{
		printf("The number with maximum absolute value is %d.\n", num3);
	}
	return 0;
}