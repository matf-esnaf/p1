#include <stdio.h>

#define MAX 100
#define MIN 1

int zbir (int a[], int n, int i, int j);

int main(){

	int a[MAX], n, i, j;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Neispravan unos.\n");
		return -1;
	}

	printf("Unesite elemente niza : ");
	for (int brojac=0; brojac<n; brojac++){
		scanf("%d", &a[brojac]);
	}

	printf("Unesite vrednost za i j: ");
	scanf("%d %d", &i, &j);

	if(i>j || i>n || j>n){
		printf("Greska pri unosu varijable i ili j.\n");
		return -1;
	}

	printf("Zbir je %d.", zbir(a, n, i, j));

	return 0;
}

int zbir (int a[], int n, int i, int j){

	int suma=0;

	for(; i<=j; i++){
		suma+=a[i];
	}

	return suma;
}
