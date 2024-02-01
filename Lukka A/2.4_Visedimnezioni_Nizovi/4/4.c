#include <stdio.h>
#include <stdlib.h>

#define max 50
#define min 1

void transport (int a[max][max], int m, int n, int b[max][max]);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m, &n);

	if(n<min || n>max || m<min || m>max){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}

	int a[max][max];

	printf("Matrix:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	int b[max][max];

	transport (a, m, n, b);

	printf("Transport:\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf(" %d", b[i][j]);
		}
		printf("\n");
	}

		exit(EXIT_SUCCESS);
}

void transport (int a[max][max], int m, int n, int b[max][max]){

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			b[j][i]=a[i][j];
		}
	}
}
