#include <stdio.h>

#define MAX 31
#define MIN 1

int prodaja (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije niza.\n");
		return -1;
	}

	printf("Unesite broj prodatih arikala: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(a[i]<0){
			printf("Greska pri unosu.\n");
			return -1;
		}
	}

	printf("Duzina najduzeg neopadajuceg prodavanja je %d.", prodaja (a, n));

	return 0;
}

int prodaja (int a[], int n){

	int niz=1, najduzi=0;

	for(int i=0; i<n-1; i++){
		if(a[i]<=a[i+1]){
			niz++;
		}else{
			if(niz>najduzi){
				najduzi=niz;
			}
			niz=1;
		}
	}

	if (niz > najduzi) {
        najduzi = niz;
    }

	return najduzi;
}
