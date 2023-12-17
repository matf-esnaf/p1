#include <stdio.h>
#include <stdlib.h>

float razlomljeni_deo(unsigned x, unsigned n);
int main()
{
	float broj;	
	printf("Unesite jedan broj: ");
		scanf("%f", &broj);

	float decimal = razlomljeni_deo(broj, broj);

	printf("Razlomljeni deo iznos %f.\n", decimal);

return 0;
}

float razlomljeni_deo(unsigned x, unsigned n){

	n=x%10;
	x=x-n;
	return x;
}
