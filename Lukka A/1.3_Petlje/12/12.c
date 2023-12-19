#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t, t1=0, x, prihod=0, rashod=0;
	
	printf("Unesite broj transakcija koje ste izvrsili: ");
		scanf("%d", &t);

	if(t>0){
	printf("Unesite %d vrednosti transakcija: ", t);

	while(t1<t){
		scanf("%d", &x);
		t1++;
	if(x>0){
		prihod +=x;
	}else{
		rashod +=x;
	}
	}
	printf("Prihod: %d.\n", prihod);
	printf("Rashod: %d.\n", rashod);

	if(prihod>rashod){
		int zarada=prihod+rashod;
		printf("Zarada: %d.\n", zarada);
	}else if(rashod>prihod){
		int gubitak=prihod+rashod;
		printf("Gubitak: %d.\n", gubitak);
	}else if(rashod==prihod){
		printf("Nema ni zarade ni gubitka, neutral.\n");
	}

	}else if(t==0){
		printf("Nema izvrsenih transakcija.\n");
	}else if(t<0){
		printf("Nekorektan unos transakcija.\n");
	}
return 0;
}
