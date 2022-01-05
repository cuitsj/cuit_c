#include<stdio.h>

int main(void)
{
	char aa[128];
	int i, zimu = 0, shuzi = 0, kongge = 0, qita = 0;

	printf("Please input string: ");
	gets(aa);
	for (i=0 ; aa[i]!='\0' ; i++)
	{
		if (aa[i]>='a' && aa[i]<='z' || aa[i]>='A' && aa[i]<='Z')
		{
			zimu++;
		}
		else if (aa[i]>='0' && aa[i]<='9')
		{
			shuzi++;
		}
		else if (aa[i] == ' ')
		{
			kongge++;
		}
		else
		{
			qita++;
		}
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);
	printf("\n");
	return 0;
}

