#include<stdio.h>

int main(void)
{
	double Fua, ce;

	printf("Input the degree: ");
	scanf("%lf", &Fua);
	ce = 5*(Fua - 32) / 9;
	printf("\nF(%.2lf)=C(%.2lf)\n", Fua, ce);
	return 0;
}


