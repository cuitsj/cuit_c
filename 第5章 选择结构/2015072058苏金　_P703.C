#include<stdio.h>

int main(void)
{
	int profit;
	double salary = 500;
	
	printf("Input  profit: ");
	scanf("%d", &profit);
	if (profit <= 1000)
	{
		printf("\nsalary=%-.2lf\n", salary);
	}
	if (profit>1000 && profit<=2000)
	{
		printf("\nsalary=%-.2lf\n", salary+profit*0.1);
	}
	if (profit>2000 && profit<=5000)
	{
		printf("\nsalary=%-.2lf\n", salary+profit*0.15);
	}
	if (profit>5000 && profit<=10000)
	{
		printf("\nsalary=%-.2lf\n", salary+profit*0.2);
	}
	if (profit > 10000)
	{
		printf("\nsalary=%-.2lf\n", salary+profit*0.25);
	}
	return 0;
}



