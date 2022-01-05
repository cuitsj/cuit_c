#include<stdio.h>

int main(void)
{
	int days[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, ye, mo, da, i, sum = 0;

	printf("Please input year-month-day: ");
	scanf("%d-%d-%d", &ye, &mo, &da);
	if (ye%400==0 || ye%100!=0 && ye%4==0)
	{
		for (i=0 ; i<mo-1 ; i++)
		{
			sum += days[i];
		}
		printf("\nIt is the %dth day.\n", sum + da);
	}
	else if (mo > 2)
	{
		for (i=0 ; i<mo-1 ; i++)
		{
			sum += days[i];
		}
		printf("\nIt is the %dth day.\n", sum + da - 1);
	}
	else 
	{
		for (i=0 ; i<mo-1 ; i++)
		{
			sum += days[i];
		}
		printf("\nIt is the %dth day.\n", sum + da);
	}
	return 0;
}