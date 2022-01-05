#include<stdio.h>

#include<math.h>

int main(void)
{
	double ai, bi, ci, pi, area;

	printf("please input triange sides:");
	scanf("%lf,%lf,%lf", &ai, &bi, &ci);
	if (ai+bi>ci && ai+ci>bi && bi+ci>ai)
	{
		pi = (ai + bi + ci) / 2;
		area = sqrt(pi*(pi - ai)*(pi - bi)*(pi - ci));
		printf("area=%.2lf\n", area);
	}
	else
	{	
		printf("data error\n");
	}
	return 0;
}