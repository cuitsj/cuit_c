#include<stdio.h>

int main(void)
{
	int days[2][12]={{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}}, ye, mo, da, i, run = 0, pin = 0, j, mod = 0, sum;
	
	printf("input a data(year-month-day):");
	scanf("%d-%d-%d", &ye, &mo, &da);
	for (i=ye-1 ; i>0 ; i--)
	{
		if (i%400==0 || i%100!=0 && i%4==0)
		{
			run++;
		}
		else
		{
			pin++;
		}
	}
	for (j=mo-1 ; j>0 ; j--)
	{	
		if (ye%400==0 || ye%100!=0 && ye%4==0)
		{
			mod = mod + days[1][j-1];
		}
		else
		{
			mod = mod + days[0][j-1];
		}
	}
	sum = run*366 + pin*365 + mod + da;
	printf("\nThe result is %d.\n", sum);
	return 0;
}






