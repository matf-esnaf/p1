#include <stdio.h>

#define MAX 600
#define MIN 1

int duplikati (int a[], int n, int b[]);

int main(){

	int a[MAX], b[MAX], n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije niza.\n");
		return -1;
	}

	printf("Unesite elemente niza a: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Elementi niza b: ");

	for(int k=0; k<duplikati(a, n, b); k++){
		printf("%d ", b[k]);
	}

	return 0;
}

int duplikati (int a[], int n, int b[]){

	int bb=0;

	for(int i=0; i<n; i++){
		for(int k=i+1; k<n; k++){
			if(a[i]==a[k]){
				b[bb]=a[i];
				bb++;
			}
		}
	}
	
	return bb;
}
