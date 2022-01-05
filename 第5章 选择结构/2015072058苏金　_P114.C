#include<stdio.h>

int main(void)
{
	int data1, data2;
	double data3;
	char op;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	switch (op)
	{
		case'+': 
			data3 = (double)data1 + data2;
			printf("%d+%d=%-.0lf\n", data1, data2, data3);
			break;
		case'-': 
			data3 = (double)data1 - data2;
			printf("%d-%d=%-.0lf\n", data1, data2, data3);
			break;
		case'*': 
			data3 = (double)data1*data2;
			printf("%d*%d=%-.0lf\n", data1, data2, data3);
			break;
		case'/':
			if (data2 == 0)
			{
				printf("Error! chu shu wei 0.\n");
			}
			else   
			{
				data3 = (double)data1 / data2;
				printf("%d/%d=%-.0lf", data1, data2, data3);
			}
			break;
		case'%':
			if (data2 == 0)
			{
				printf("Error! chu shu wei 0.\n");
			}
			else
			{
				data3 = data1 % data2;
				printf("%d%%%d=%-.0lf\n", data1, data2, data3);
			}
			break;
		default:
			printf("Invalid operator!\n");
	}
	return 0;
}