#include<stdio.h>

int main(void)
{
	int i, j, k, li, mi, ni, mw, sx, nx, hw = 1, zs = 1, num[6];
	
	printf("please input m, n(5<=m<=n<=100000): ");
	scanf("%d,%d", &mi, &ni);
	printf("Result(%d-%d):\n", mi, ni);
	for (i=mi ; i<=ni ; i++)
	{
		k = i;
		for (j=0 ; k>0 ; j++)
		{
			mw = k % 10;
			k = k / 10;
			num[j] = mw;
		}
		for (sx=0, nx=j - 1 ; nx>=0 && sx<=j - 1 ; sx++, nx--)
		{
			if (num[sx] != num[nx])
			{
				hw = 0;
			}
		}
		for (li=2 ; li<i ; li++)
		{
			if (i % li == 0)
			{
				zs = 0;
			}
		}
		if (hw == 1 && zs == 1)
		{
			printf("%d ", i);
		}
		if (hw == 0 || zs == 0)
		{
			hw = 1;
			zs = 1;
		}
	}
	return 0;
}




