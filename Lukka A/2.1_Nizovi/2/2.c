#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100
#define MIN 1

int main(){

	int n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unos.\n");
		return -1;
	}

	int i=0;
	float niz[MAX];

	printf("Unesite elemente niza: ");
	for(; i<n; i++){
		scanf("%f", &niz[i]);
	}

	i=0;

	printf("Novi niz: ");
	for(; i<n; i++){
		if(niz[i]<0){
			niz[i]=pow(niz[i], 2);
		}
		printf("%.2f, ", niz[i]);
	}

	return 0;
}
