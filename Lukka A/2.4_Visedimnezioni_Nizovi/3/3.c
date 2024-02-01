#include <stdio.h>
#include <stdlib.h>

#define MAX 50
#define MIN 1

void ucitaj (int a[MAX][MAX], int *m, int *n);
void ispis (int a[MAX][MAX], int m, int n);

int main(){

	int a[MAX][MAX];
	int m, n;

	ucitaj (a, &m, &n);

	ispis (a, m, n);

	exit(EXIT_SUCCESS);
}

void ucitaj (int a[MAX][MAX], int *m, int *n){

	printf("m x n: ");
	scanf("%d %d", m, n);

	if(*n<MIN || *n>MAX || *m<MIN || *m>MAX){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}

	printf("Matrix:\n");
	for(int i=0; i<*m; i++){
		for(int j=0; j<*n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void ispis (int a[MAX][MAX], int m, int n){

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
}
