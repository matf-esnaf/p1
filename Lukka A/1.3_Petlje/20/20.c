#include <stdio.h>
int main()
{
	float b, a, a1=0, a2=0, x; 

	printf("Nikolin budzet: ");
		scanf("%f", &b);

	if(b<=0){
		printf("Nekorektan unos budzeta.\n");
		return 1;
	}

	printf("Unesite broj artikala: ");
		scanf("%f", &a);

	if(a<=0){
		printf("Nekorektan unos broja artikala.\n");
		return 1;
	}

	printf("Unesite cene artikala: ");

	while(a1<a){
		scanf("%f", &x);
	if(x<=0){
		printf("Nekorektan unos cene.\n");
		return 1;
	}
	
	if(x<b){
		a2++;
	}
	a1++;
	}

	printf("Broj artikala koje Nikola moze da kupi je %.0f.", a2);

return 0;
}
