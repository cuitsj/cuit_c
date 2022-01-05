#include<stdio.h>

int main(void)
{
	int num[10], js[5], i, count = 0;

	printf("Input 10 integers: ");
	for (i=0 ; i<10 ; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i=0 ; i<10 ; i++)
	{
		if (num[i]%2!=0 && i%2!=0)
		{
			js[count] = i;
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	for (i=0 ; i<count ; i++)
	{
		printf("a[%d]=%d\n", js[i], num[js[i]]);
	}
	return 0;
}



