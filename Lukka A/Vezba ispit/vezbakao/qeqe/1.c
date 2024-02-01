#include <stdio.h>

#define max 4

int funkcija (int m[max][max], int n);

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

	printf("Izlaz: %d", funkcija (m, n));

}

int funkcija (int m[max][max], int n){

	int suma=0;

	for(int i=0; i<n; i++){
		suma+=m[i][i]*m[i][n-1];
	}

	return suma;
}
