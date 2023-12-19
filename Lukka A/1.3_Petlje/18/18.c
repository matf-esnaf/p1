#include <stdio.h>
int main()
{
	float n, n1, brojevi, brojevi2=0, brpr=0;

	printf("Unesite broj n (broj cifara koji zelite da unesete kasnije): ");
		scanf("%f", &n);

	if(n<=0){
		printf("Neispravan unos.\n");
		return 1;
	}

	printf("Unesite brojeve: \n");

	while(n1<n){
		scanf("%f", &brojevi);
		n1++;

	if(brojevi>0 && brojevi2<0 || brojevi<0 && brojevi2>0 || brojevi<0 && brojevi2==0){
		brpr++;
	}
	brojevi2=brojevi;
	}

	printf("Broj promena znaka iznosi %.0f.\n", brpr);

return 0;
}
