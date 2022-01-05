#include<stdio.h>

int main(void)
{
	int mon;

	printf("please input the month number: ");
	scanf("%d", &mon);
	switch (mon)
	{
		case 1:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 2:
			printf("\n2003.%d has 28 days\n", mon);
			break;
		case 3:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 4:
			printf("\n2003.%d has 30 days\n", mon);
			break;
		case 5:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 6:
			printf("\n2003.%d has 30 days\n", mon);
			break;
		case 7:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 8:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 9:
			printf("\n2003.%d has 30 days\n", mon);
			break;
		case 10:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		case 11:
			printf("\n2003.%d has 30 days\n", mon);
			break;
		case 12:
			printf("\n2003.%d has 31 days\n", mon);
			break;
		default:
			printf("\nInvalid month input !\n");
	}
	return 0;
}

		
		
