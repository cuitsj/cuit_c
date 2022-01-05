#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void deleteother(char *pi);

int main(void)
{
	char str[100];
	
	printf("Please input the string : ");
	gets(str);
	
	deleteother(str);
	printf("\noutput: %s\n", str);
	
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void deleteother(char *pi)
{
	int i, j;

	for (i=0 ; *(pi + i)!='\0' ; i++)
	{
		if ((*(pi + i)<'A' || *(pi + i)>'Z') && (*(pi + i)<'a' || *(pi + i)>'z'))
		{
			do
			{
				for (j=i ; *(pi + j)!='\0' ; j++)
				{
					*(pi + j) = *(pi + j + 1);
				}
			} while ((*(pi + i)<'A' || *(pi + i)>'Z') && (*(pi + i)<'a' || *(pi + i)>'z') && *(pi + i) != '\0');
		}
	}
	
}