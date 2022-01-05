#include<stdio.h>

int main(void)
{
	int i, j, k, li, sum, num, yz[100];
	
	printf("Please input an integer: ");
	scanf("%d", &num);
	for (li=1 ; li<=num ; li++)
	{
		j = 0;
		sum = 0;
		for (i=1 ; i<li ; i++)
		{
			if (li % i == 0)
			{
				sum += i;
				yz[j++] = i;
			}
		}
		if (li == sum)
		{
			i = li;
			printf("%6d is a wanshu", li);
			for (k=0 ; k<j ; k++)
			{
				printf(" %d", yz[k]);
			}
			printf("\n");
		}
	}
	return 0;
}





