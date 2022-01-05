#include<stdio.h>

int main(void)
{
	int aa[5], bb[5], i, j, sum = 0;

	printf("Input A: ");
	for (i=0 ; i<5 ; i++)
	{
		scanf("%d", &aa[i]);
	}
	printf("Input B: ");
	for (i=0 ; i<5 ; i++)
	{
		scanf("%d", &bb[i]);
	}
	for (i=0, j=4 ; i<5, j>=0 ; i++, j--)
	{
		sum += aa[i]*bb[j];
	}
	printf("\nsum=%d\n", sum);
	return 0;
}