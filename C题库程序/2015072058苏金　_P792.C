#include<stdio.h>

#include<string.h>

int main(int argc, char *argv[])
{
	char *tmp;
	int i, j;

	if (argc != 4)
	{
		printf("    error, usage: P792  str1 str2 str3\n");
		return 1;
	}
	else
	{
		for (i=1; i<3; i++)
		{
			for (j=i+1; j<4; j++)
			{
				if (strcmp(argv[i], argv[j]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[j];
					argv[j] = tmp;
				}
			}
		}
		printf("    output: %s   %s   %s\n", argv[1], argv[2], argv[3]);
	}
	return 0;
}


