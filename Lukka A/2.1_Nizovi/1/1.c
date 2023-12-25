#include <stdio.h>

int main(){

	int d;

	printf("Unesite dimenziju niza: ");
		scanf("%d", &d);

	if(d<1 || d>100){
		printf("Greska pri unosu dimenzije niza.\n");
		return -1;
	}

	int niz[100];
	int i=0;

	printf("Unesite elemente niza: ");

	for(; i<d; i++){
		scanf("%d", &niz[i]);
	}

	printf("Elementi niza na parnim pozocijama: ");

	i=0;

	for(; i<d; i+=2){
		printf("%d, ", niz[i]);
	}

	printf("\nParni elementi niza: ");

	i=0;

	for(; i<d; i++){
		if(niz[i]%2==0){
			printf("%d, ", niz[i]);
		}
	}

	return 0;
}
