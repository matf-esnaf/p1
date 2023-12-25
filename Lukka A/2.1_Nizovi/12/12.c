#include <stdio.h>

#define MAX 100
#define MIN 1

int parni (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Neispravan unos dimenzija niza.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Rezultat: %d. ", parni(a, n));

	return 0;
}

int parni (int a[], int n){
	
	int rezultat=0;
	int najveci=0;
	int i=0;

	for(; i<n; i++){
		int m=0;
		
		for(; m<n; m++){
			if(a[i]>a[m]){
				najveci=i;
			}else{
				najveci=m;
			}
		}
	}

	i=0;

	for(; i<najveci; i++){
		if(a[najveci]>a[i]){
			rezultat++;
		}
	}


	return rezultat;
}
