#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 1000
#define MIN 1

void ucitaj (int a[], int n);
void ispis (int a[], int n);
int suma (int a[], int n);
float prosek (int a[], int n);
int maksimum (int a[], int n);
int pozicija_minimum (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Neispravan unos.\n");
		return -1;
	}

	ucitaj (a, n);
	ispis (a, n);
	printf("Suma: %d.\n", suma (a, n));
	printf("Prosek: %.3f.\n", prosek (a, n));
	printf("Maksimum: %d.\n", maksimum (a, n));
	printf("Pozicija minimum: %d.\n", pozicija_minimum (a, n));

	return 0;
}

void ucitaj (int a[], int n){

	int i=0;

	printf("Unesite elemente niza: ");
	for(; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void ispis (int a[], int n){

	printf("Vreme trcanja takmicara redom: ");

	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	printf("\n");
}

int suma (int a[], int n){

	int i=0;
	int ukupno=0;

	for(; i<n; i++){
		ukupno+=a[i];
	}

	return ukupno;
}

float prosek (int a[], int n){

	float average = (suma(a,n))/n;

	return (float) average;
}

int maksimum (int a[], int n){

	int i=0;
	int najveci=0;

	for(; i<n; i++){
		if(a[i]<a[i-1]){
			najveci=a[i-1];
		}else{
			najveci=a[i];
		}
	}
	return najveci;
}

int pozicija_minimum  (int a[], int n){

	int minimum=0;

	for(int i=0; i<n; i++){
		int m=0;
		for(; m<i; m++){
			if(a[i]<a[m]){
				minimum=i;
			}else{
				minimum=m;
			}
		}
	}

	return minimum;
}
