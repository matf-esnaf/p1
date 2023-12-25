#include <stdio.h>

#define MAX 100
#define MIN 1

int broj_m (int a[], int n, int m);
int pozicija1_m (int a[], int n, int m);
int pozicija2_m (int a[], int n, int m);

int main(){

	int a[MAX], n, m;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Unesite vrednost broja m: ");
	scanf("%d", &m);

	if(broj_m(a, n, m)==0){
		printf("Broj m se ne nalazi u datom nizu.\n");
		return -1;
	}

		printf("Pozicija prvog pojavljivama je %d.\n", pozicija1_m(a, n, m));
		printf("Pozicija zadnjeg pojavljivanja je %d.\n", pozicija2_m(a, n, m));
	
	return 0;
}

int broj_m (int a[], int n, int m){

	for(int i=0; i<n; i++){
		if(a[i]==m){
			return 1;
		}
	}
	return 0;
}

int pozicija1_m (int a[], int n, int m){

	int pozicija=0;

	for(int i=0; i<n; i++){
		if(a[i]==m){
			pozicija=i;
			break;
		}
	}

	return pozicija;
}

int pozicija2_m (int a[], int n, int m){

	int pozicija=0;

	for(int i=0; i<n; i++){
		if(a[i]==m){
			pozicija=i;
		}
	}

	return pozicija;
}
