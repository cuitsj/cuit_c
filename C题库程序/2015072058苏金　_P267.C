#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("    usage: P267  num1 num2\n");
		return 22;
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("    由小到大：  %d  %d\n", n2<n1?n2:n1, n1>n2?n1:n2);
		return 0;
	}
}




