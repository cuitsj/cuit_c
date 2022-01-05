#include<stdio.h>

int main(void)
{
	int i;
	
	printf("please input the score(0-100): ");
	scanf("%d", &i);
	if (i>100 && i<110)
	{	
		printf("\nscore=%d, grade=X\n", i);
	}
	else if (i<0 && i>-10)
	{	
		printf("\nscore=%d, grade=X\n", i);
	}
	else
	{
		switch (i / 10)
		{
			case 10:
			case 9:
				printf("\nscore=%d, grade=A\n", i);
				break;
			case 8:
				printf("\nscore=%d, grade=B\n", i);
				break;
			case 7:
				printf("\nscore=%d, grade=C\n", i);
				break;
			case 6:
				printf("\nscore=%d, grade=D\n", i);
				break;
			case 5:
				printf("\nscore=%d, grade=E\n", i);
				break;
			case 4:
				printf("\nscore=%d, grade=F\n", i);
				break;
			case 3:
				printf("\nscore=%d, grade=G\n", i);
				break;
			case 2:
				printf("\nscore=%d, grade=H\n", i);
				break;
			case 1:
				printf("\nscore=%d, grade=I\n", i);
				break;
			case 0:
				printf("\nscore=%d, grade=J\n", i);
				break;
			default:
				printf("\nscore=%d, grade=X\n", i);
		}
	}
	return 0;
}

