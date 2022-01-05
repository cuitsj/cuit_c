#include<stdio.h>

int main(void)
{
	int i, benjin, cunqi;
	double lixi = 0;
	
	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &benjin, &cunqi);
	for (i=1 ; i<=cunqi ; i++)
	{
		switch (cunqi)
		{
			case 1:
				lixi = lixi + benjin*3.15 / 100;
				continue;
			case 2:
				lixi = lixi + benjin*3.63 / 100;
				continue;
			case 3:
				lixi = lixi + benjin*4.02 / 100;
				continue;
			case 5:
				lixi = lixi + benjin*4.69 / 100;
				continue;
			default:
				lixi = lixi + benjin*5.36 / 100;
				continue;
		}
	}
	printf("\nlixi = %-.2lf yuan\n", lixi);
	return 0;
}




