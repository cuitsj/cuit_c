#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 5)
	{
		printf("    usage: P264  ´®1 ´®2 ´®3 ´®4\n");
		return 29;
	}
	else
	{
		printf("    ´®4=%s  ´®3=%s  ´®2=%s  ´®1=%s\n", argv[4], argv[3], argv[2], argv[1]);
		return 0;
	}
}


