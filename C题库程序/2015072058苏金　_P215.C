#include<stdio.h>

int main(void)
{
	int i, n, k;
	double s = 0, j;
	
	printf("Please input n: ");
	scanf("%d", &n);
	for (i = 1 ; i <= n ; i++)
	{
		k = 0;
		j = 1;
		do
		{
			j = j*i;
			i--;
			k++;
		} while (i > 0);
		i = k;
		s = s + 1 / j;
	}
	printf("\nS=1/1!+1/2!+...+1/%d!=%-.16f\n", n, s);
	return 0;
}