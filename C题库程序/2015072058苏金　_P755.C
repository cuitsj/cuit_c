#include<stdio.h>

int main(void)
{
	char i;

	printf("please input the grade: ");
	scanf("%c", &i);
	switch (i)
	{
		case 'A':
			printf("\ngrade=%c, score=95\n", i);
			break;
		case 'B':
			printf("\ngrade=%c, score=85\n", i);
			break;
		case 'C':
			printf("\ngrade=%c, score=75\n", i);
			break;
		case 'D':
			printf("\ngrade=%c, score=65\n", i);
			break;
		case 'E':
			printf("\ngrade=%c, score=55\n", i);
			break;
		case 'F':
			printf("\ngrade=%c, score=45\n", i);
			break;
		case 'G':
			printf("\ngrade=%c, score=35\n", i);
			break;
		case 'H':
			printf("\ngrade=%c, score=25\n", i);
			break;
		case 'I':
			printf("\ngrade=%c, score=15\n", i);
			break;
		case 'J':
			printf("\ngrade=%c, score=0\n", i);
			break;
		default:
			printf("\ngrade=%c Error\n", i);
	}
	return 0;
}

