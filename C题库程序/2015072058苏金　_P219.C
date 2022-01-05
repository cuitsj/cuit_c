#include<stdio.h>

int main(void)
{
	char aa[128];
	int shuzii[128], i, shuzi = 0;

	printf("Please input string: ");
	gets(aa);
	for (i=0 ; aa[i]!='\0' ; i++)
	{
		if (aa[i]>='0' && aa[i]<='9')
		{
			shuzi++;
			shuzii[shuzi] = i;
		}
	}
	printf("\nshu zi ge shu wei: %d", shuzi);
	printf("\nshu zi wei: ");
	for (i=1 ; i<=shuzi ; i++)
	{
		printf("%c", aa[shuzii[i]]);
	}
	printf("\n");
	return 0;
}


