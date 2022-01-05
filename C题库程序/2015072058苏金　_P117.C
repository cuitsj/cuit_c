#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	double n1, n2;

	if (argc != 3)
	{
		printf("    usage: P117  num1 num2\n");
		return 76;
	}
	else
	{
		n1 = atof(argv[1]);
		n2 = atof(argv[2]);
		printf("    (%.3f - %.3f) * 3   =  %.3f\n", n1, n2, (n1 - n2) * 3);
		return 0;
	}
}


