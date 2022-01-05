#include<stdio.h>

int main(void)
{
	int n1, n2, n3, i, j;

	printf("please input two integer numbers: ");
	scanf("%d %d", &n1, &n2);
	i = n1;
	j = n2;
	while (i != j)
	{
		if (i > j)
		{
			n3 = i - j;
			i = n3;
		}
		else 
		{
			n3 = j - i;
			j = n3;
		}
	}	
	printf("\nthe greatest common divisor is %d", i);
	printf("\nthe least common multiple is %d\n", n1*n2/i);
	return 0;
}



