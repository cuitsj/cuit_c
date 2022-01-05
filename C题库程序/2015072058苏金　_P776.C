#include<stdio.h>

int main(void)
{
	int i, cd, count = 0, num[201];
	
	printf("Please input n: ");
	scanf("%d", &cd);
	for (i=1 ; i<=cd ; i++)
	{
		num[i] = i;
	}
	printf("\nResult is:\n");
	do
	{
		count++;
		printf("delete %d student: %d.\n", count, num[3]);
		num[cd + 1] = num[1];
		num[cd + 2] = num[2];
		for (i=1 ; i<cd+2 ; i++)
		{
			num[i] = num[i + 3];
		}
		cd--;
	} while (cd > 2);
	printf("delete %d student: %d.\n", count + 1, num[1]);
	printf("The remained student is %d.\n", num[2]);
	return 0;
}
