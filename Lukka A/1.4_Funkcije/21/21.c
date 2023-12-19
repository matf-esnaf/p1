#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e_na_x (double x, double eps);

int main(){

	double a, b;

	printf("Unesite broj: ");
		scanf("%lf", &a);

	printf("Unesite eps: ");
		scanf("%lf", &b);

	printf("Rezultat: %lf.\n", e_na_x(a, b));

	return 0;
}

double e_na_x (double x, double eps){

	double stepen_e = exp (x);

	double suma=1, faktorijel_n=1, n=1;

	double x_na_n=0;

	for (; fabs(stepen_e - suma) >= eps; n++){
		x_na_n=pow(x, n);
		faktorijel_n=faktorijel_n*n;
		suma=suma+x_na_n/faktorijel_n;
	}
	
	return suma;
}
