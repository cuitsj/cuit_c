#include<stdio.h>

int main(void)
{
	int i;

	printf("Input a side of cube: ");
	scanf("%d", &i);
	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", i*i*i, 6*i*i);
	return 0;
}
