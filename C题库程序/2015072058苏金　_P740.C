#include<stdio.h>

int main(void)
{
	int cock, hen, chick, M, N;
	
	printf("Input the money: ");
	scanf("%d", &M);
	printf("Input the number: ");
	scanf("%d", &N);
	printf("\n  cock   hen chick\n");
	for (cock=0 ; cock<=N ; cock++)
	{
		for (hen=0 ; hen<=N ; hen++)
		{
			for (chick=0 ; chick<=N ; chick++)
			{
				if (chick%3==0 && cock+hen+chick==N && 5*cock+3*hen+chick/3==M)
				{
					printf("%6d%6d%6d\n", cock, hen, chick);
				}
			}
		}
	}
	return 0;
}

