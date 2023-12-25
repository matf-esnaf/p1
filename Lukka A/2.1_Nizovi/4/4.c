#include <stdio.h>

#define MAX 100
#define MIN 1

int main (){

	int n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije.\n");
		return -1;
	}

	int niz[MAX];
	int i=0;

	printf("Unesite elemente niza: ");

	for(; i<n; i++){
		scanf("%d", &niz[i]);
	}

	int k;

	printf("Unesite broj: ");
	scanf("%d", &k);

	if(k<MIN){
		printf("Greska pri unosu broja k.\n");
		return -1;
	}

	int l=0;
	i=0;

	printf("Rezultat: ");

	for(; i<n; i++){
		if(niz[i]%k==0){
			printf("%d ", i);
			l++;
		}
	}

	if(l==0){
		printf("U datom nizu nema brojeva deljivih sa %d.", k);
	}

	return 0;
}
