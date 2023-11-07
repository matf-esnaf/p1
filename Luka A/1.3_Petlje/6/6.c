#include <stdio.h>
#include <math.h>
int main()
{

	float x, n;

	printf("Unesite ceo broj x i ceo nenegativan broj n (x^n): ");
		scanf("%f %f", &x, &n);

	if(n>=0){

	x=pow(x, n);

	printf("Broj x stepenovan brojem n iznosi %f.\n", x);

	}else{
		printf("Neispravan unos broja n.\n");
	}

return 0;
}
