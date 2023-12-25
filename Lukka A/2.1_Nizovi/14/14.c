#include <stdio.h>

#define MAX 100
#define MIN 1

float zbir_pozitivnih (float a[], int n, int k);

int main(){

	float a[MAX];
	int n, k;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije niza.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%f", &a[i]);
	}

	printf("Unesite vrednost za k: ");
	scanf("%d", &k);

	if(k>n){
		k=n;
	}

	if(k<0){
		printf("Greska pri unosu varijable k.\n");
		return -1;
	}

	printf("Zbir je: %.2f.", zbir_pozitivnih(a, n, k));

	return 0;
}

float zbir_pozitivnih (float a[], int n, int k){

	float suma=0;

	for(int i=0; i<=k; i++){

		if(a[i]>0){
			suma+=a[i];
		}else{
			continue;
		}
	}

	return suma;
}
