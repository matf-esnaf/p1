#include <stdio.h>

#define MAX 2000
#define MIN 1

void neprioretan (int a[], int n, int y);
void prioritet (int a[], int n, int x);
void prioritet_redni (int a[], int n, int z, int w);
void usluzivanje (int a[], int n);
void odustajanje (int *n);
void odustajanje_redni (int a[], int n, int s);

int main(){

	int a[MAX], n;

	printf("Unesite trenutni broj klijenata: ");
	scanf("%d", &n);

	printf("Unesite niz sa rednim brojem klijenta: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	int y;

	printf("Unesite klijenta kojeg treba ubaciti u niz: ");
	scanf("%d", &y);

	n++;
	neprioretan (a, n, y);

	printf("Niz nakon ubacivanja klijenta: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	int x;

	printf("\nUnesite prioritetnog klijenta kojeg treba ubaciti u niz: ");
	scanf("%d", &x);

	n++;
	prioritet (a, n, x);

	printf("Niz nakon ubacivanja klijenta: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	int z, w;

	printf("\nUnesite klijenta kog treba ubaciti u niz i njegovu poziciju: ");
	scanf("%d %d", &z, &w);

	n++;
	prioritet_redni (a, n, z, w);

	printf("Niz nakon ubacivanja klijenta: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	printf("\nKlijent se usluzuje.......");

	n--;
	usluzivanje (a, n);

	printf("\nNiz nakon usluzivanja klijenta: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	printf("\nKlijent na zadnjoj poziciji odustaje......");

	odustajanje(&n);

	printf("\nNiz nakon odustajanja klijenta: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	int s;

	printf("\nUnesite broj klijenta koji je napustio red: ");
	scanf("%d", &s);

	odustajanje_redni (a, n, s);

	printf("Nakon odustajanja klijenta niz je: ");
	for(int i=0; i<n-1; i++){
		printf("%d ", a[i]);
	}

	return 0;
}

void neprioretan (int a[], int n, int y){

	a[n-1]=y;

}
void prioritet (int a[], int n, int x){

	//RIGH SHIFT (SHIFTING AN ARRAY TO THE RIGHT)//

	for(int i=n; i>0; i--){
		a[i]=a[i-1];
	}
	a[0]=x;
}

void prioritet_redni (int a[], int n, int z, int w){

	int i=n;

	for(; i>w; i--){
		a[i]=a[i-1];
	}

	a[i]=z;
}

void usluzivanje (int a[], int n){

	//LEFT SHIFT (SHIFTING AN ARRAY TO THE LEFT)//

	for(int i=0; i<n; i++){
		a[i]=a[i+1];
	}
}

void odustajanje (int *n){

	(*n)--;
}

void odustajanje_redni (int a[], int n, int s){

	for(int i=0; i<n; i++){
		if(a[i]==s){
			for(int j=i; j<n-1; j++){
				a[j]=a[j+1];
			}
			break;
		}
	}
}
