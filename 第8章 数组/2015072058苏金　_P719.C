#include<stdio.h>

#include<string.h>

int main(void)
{
	char str[5][81], tmp[81];
	int i, j;

	printf("Input 5 strings:\n");
	for (i=0 ; i<5 ; i++)
	{
		gets(str[i]);
	}
	printf("---------------------------\n");
	for (i=0 ; i<4 ; i++)
	{
		for (j=i+1 ; j<5 ; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(tmp, str[j]);
				strcpy(str[j], str[i]);
				strcpy(str[i], tmp);
			}
		}
	}
	for (i=0 ; i<5 ; i++)
	{
		printf("%s\n", str[i]);
	}
	return 0;
}

