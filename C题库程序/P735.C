#include<stdio.h>
#include<math.h>

int main(void)
{
	int i;
	double area, pi;

	printf("Input a side of triangle: ");
	scanf("%d", &i);
	pi = (double)3*i / 2;
	area = sqrt(pi*(pi - i)*(pi - i)*(pi - i));
	printf("\nThe area of triangle is %.2lf, the circle of triangle is %d.\n", area, 3*i);
	return 0;
}
