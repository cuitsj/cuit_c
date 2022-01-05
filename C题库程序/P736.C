#include<stdio.h>

int main(void)
{
	int i, j, k, ll;

	printf("Input a number with 4-digit: ");
	scanf("%d", &i);
	j = i % 10;
	i = i / 10;
	k = i % 10;
	i = i / 10;
	ll = i % 10;
	i = i / 10;
	printf("\nsum=%d\n", i + j + k +ll);
	return 0;
}

