#include <stdio.h>

int main()
{

	float x, y;
	
	printf("Unesite tezinu avionskog tereta izrazenu u funtama:");
		scanf("%f", &x);

	y=x*0.45359237;

	printf("Ista kolicina tereta izrazena u kilogramima iznosi:%.2f.\n", y);

return 0;
}
