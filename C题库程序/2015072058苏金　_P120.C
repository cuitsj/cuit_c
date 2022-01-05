#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n1;
	double n2, n3;

	if (argc != 4)
	{
		printf("    usage: P120  num1 num2 num3\n");
		return 23;
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atof(argv[2]);
		n3 = atof(argv[3]);
		printf("    %d + (%.3lf - %.3lf) * 3   =  %.3lf\n", n1, n2, n3, n1 + (n2 - n3) * 3);
		return 0;
	}
}


