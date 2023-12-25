#include <stdio.h>

#define MAX 100
#define MIN 1

int manji (int a[], int n);
void elementi (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije.\n");
		return -1;
	}

	elementi (a, n);

	printf("Postoji %d elemenata manjih od poslednjeg.\n", manji(a, n));

	return 0;
}

void elementi (int a[], int n){

	printf("Unesite elemente niza: ");
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
}

int manji (int a[], int n){

	int brojac=0;

	for(int i=0; i<n; i++){
		if(a[n-1]>a[i]){
			brojac++;
		}
	}
	
	return brojac;
}
