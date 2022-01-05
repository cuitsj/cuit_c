#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])
{
	double x1, x2;

	if (argc != 3)
	{
		printf("    usage: P116  num1 num2\n");
		return 9;
	}
	else
	{
		x1 = atof(argv[1]);
		x2 = atof(argv[2]);
		printf("    (%.3f + %.3f) / 2   =  %.3f\n", x1, x2, (x1 + x2) / 2);
		return 0;
	}
}





	