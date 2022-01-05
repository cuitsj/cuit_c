#include<stdio.h>

int main(void)
{
	char ch;
	int find, seek;
	
	printf("Please input the letter of someday: ");
	do
	{
		ch = getchar();
		if (ch == 'M' && find!=1 && seek!=1)
		{
			printf("Monday\n");
		}
		else if (find==1 && ch!='u' && ch!='h' && ch!='T')
		{
			printf("data error\n");
			find = 0;
			if (ch == 'M')
			{
				printf("Monday\n");
			}
			else if (ch == 'W')
			{
				printf("Wednesday\n");
			}
			else if (ch == 'F')
			{
				printf("Friday\n");
			}
			else if (ch != 'Y')
			{
				printf("data error\n");
			}
		}
		else if (find==1 && ch=='T')
		{
			printf("data error\n");
		}
		else if (ch == 'T')
		{
			find = 1;
		}
		else if (find==1 && ch=='u')
		{	
			printf("Tuesday\n");
			find = 0;
		}
		else if (ch == 'W' && find!=1 && seek!=1)
		{
			printf("Wednesday\n");
		}
		else if (find==1 && ch=='h')
		{	
			printf("Thursday\n");
		}
		else if (ch == 'F' && find!=1 && seek!=1)
		{
			printf("Friday\n");
		}
		else if (seek==1 && ch!='a' && ch!='u' && ch!='S')
		{
			printf("data error\n");
			seek = 0;
			if (ch == 'M')
			{
				printf("Monday\n");
			}
			else if (ch == 'W')
			{
				printf("Wednesday\n");
			}
			else if (ch == 'F')
			{
				printf("Friday\n");
			}
			else if (ch != 'Y')
			{
				printf("data error\n");
			}
		}
		else if (seek==1 && ch=='S')
		{	
			printf("data error\n");
		}
		else if (ch == 'S')
		{
			seek = 1;
		}
		else if (seek==1 && ch=='a')
		{	
			printf("Saturday\n");
			seek = 0;
		}
		else if (seek==1 && ch=='u')
		{
			printf("Sunday\n");
			seek = 0;
		}
		else if (ch != 'Y')
		{
			printf("data error\n");
		}
	} while (ch != 'Y');
	return 0;
}


