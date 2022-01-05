#include<stdio.h>

int main(void)
{
	char str[128], tmp;
	int i = -1, j, k;
	
	printf("input the string: ");
	do
	{   
		i++;
		scanf("%c", &str[i]);
	} while (str[i]!='\n' && i<128);
	str[i] = '\0';
	for (j=0 ; j<i-1 ; j++)
	{
		for (k=j+1 ; k<i ; k++)
		{
			if (str[j] > str[k])
			{
				tmp = str[k];
				str[k] = str[j];
				str[j] = tmp;
			}
		}
	}
	printf("\nResult:    %s\n", str);
	return 0;
}

