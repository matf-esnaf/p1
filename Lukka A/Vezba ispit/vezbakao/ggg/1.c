#include <stdio.h>
#include <stdlib.h>

#define min 1
#define max 10

void funkcija (int m[max][max], int n, int m1[max][max]);

int main(){

	int n;
	int m[max][max];
	int m1[max][max];

	printf("Ulaz:\n");

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &m[i][j]);
		}
	}

	funkcija (m, n, m1);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}

	exit(EXIT_SUCCESS);
}

void funkcija (int m[max][max], int n, int m1[max][max]){

	int n1=n-1;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m1[j][i]=m[n1][j];
		}
		n1--;
	}
}
