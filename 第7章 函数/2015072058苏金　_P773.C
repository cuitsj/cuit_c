#include<stdio.h>

#include<math.h>

int ts(int ni, int yi, int ri);

int main(void)
{
	int n1, y1, r1, n2, y2, r2;

	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &n1, &y1, &r1);
	printf("to the date(****/**/**):\n");
	scanf("%d/%d/%d", &n2, &y2, &r2);
	printf("\nsum=%d\n", abs(ts(n1, y1, r1) - ts(n2, y2, r2)));
	return 0;
}

int ts(int ni, int yi, int ri)
{
	int i, sum = 0, days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (i=0 ; i<=ni ; i++)
	{
		if (i%400==0 || i%100!=0 && i%4==0)
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	for (i=0 ; i<=yi ; i++)
	{
		if (ni%400==0 || ni%100!=0 && ni%4==0 && i==1)
		{
			sum += days[i] + 1;
		}
		else
		{
			sum += days[i];
		}
	}
	sum += ri;
	return sum;
}
