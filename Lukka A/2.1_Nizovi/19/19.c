#include <stdio.h>

#define MAX 300
#define MIN 1

int neopadajuce (int a[], int n);

int main(){

	int a[MAX], n;

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

	int rezultat = neopadajuce (a, n);

	if(rezultat == 1 || n==1){
		printf("Niz je uredjen neopadajuce.\n");
		return 0;
	}else{
		printf("Niz nije uredjen neopadajuce.\n");
		return -1;
	}
}

int neopadajuce (int a[], int n){

	for(int i=0; i<n; i++){
		if(a[i]>a[i+1]){
			return 0;
		}
	}

	return 1;
}
