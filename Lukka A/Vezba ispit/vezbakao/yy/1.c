#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 50
#define min 1

int funkcija (int n, int m[max][max]);

int main(){

	int n;
	int m[max][max];

	printf("Ulaz:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &m[i][j]);
		}
	}

	printf("\n%d\n", funkcija(n, m));

	exit(EXIT_SUCCESS);
}

int funkcija (int n, int m[max][max]){

	int maks=0;
	int indeks=0;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(m[i][j]==maks){
				continue;
			}
			if(m[i][j]>maks){
				maks=m[i][j]-'0';
				indeks=i;
			}
		}
	}
	return indeks;
}
