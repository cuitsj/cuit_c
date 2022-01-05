#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	double n1, n2;

	if (argc != 3)
	{
		printf("    usage: P118  num1 num2\n");
		return 103;
	}
	else
	{
		n1 = atof(argv[1]);
		n2 = atof(argv[2]);
		printf("    (%.3lf*%.3lf - %.3lf*%.3lf) / 6   =  %.3lf\n", n1, n1, n2, n2, (n1*n1 - n2*n2) / 6.0);
		return 0;
	}
}


