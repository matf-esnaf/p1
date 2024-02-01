#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 50
#define min 1

void funkcija (int a[max][max], int m, int n);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m, &n);

	int a[max][max];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	funkcija (a, m, n);

	exit(EXIT_SUCCESS);
}

void funkcija (int a[max][max], int m, int n){
	
	printf("\nSredine: ");

	float b[max];

	for(int i=0; i<m; i++){
		float sredina = 0;
		for(int j=0; j<n; j++){
			sredina += a[i][j];
		}
		sredina/=n;
		b[i]=sredina;
		printf("%.2f ", b[i]);
	}
}
