#include<stdio.h>

int main(void)
{
	int i, j, n;
	
	printf("Please input n: ");
	scanf("%d", &n);
	for (i=1 ; i<=2*n-1 ; i++)
	{
		for (j=1 ; j<=2*n-1 ; j++)
		{
			if (i+j==n+1 || j-i==n-1)
			{
				printf("%c", 'a'+i-1);
			}
			else if (i-j==n-1 || i+j==3*n-1)
			{
				printf("%c", 'a'+2*n-1-i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}


