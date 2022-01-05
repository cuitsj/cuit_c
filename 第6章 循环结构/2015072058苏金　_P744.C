#include<stdio.h>

int main(void)
{
	int i;
	float score;
	
	do
	{
		printf("please input the score(0-100): ");
		scanf("%f", &score);
	} while (score < 0 || score > 100);
	i = (int)score / 10;
	switch (i)
	{
		case 10:
		case 9: 
			printf("\nscore=%-.1f,grade=A\n", score);
			break;
		case 8: 
			printf("\nscore=%-.1f,grade=B\n", score);
			break;
		case 7: 
			printf("\nscore=%-.1f,grade=C\n", score);
			break;
		case 6: 
			printf("\nscore=%-.1f,grade=D\n", score);
			break;
		default:
			printf("\nscore=%-.1f,grade=E\n", score);
	}
	return 0;
}