#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXn 50
#define MAXm 50

int provera (int m, int n);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m, &n);

	if(provera (m,n) == 0){
		printf("\n-1\n");
		return -1;
	}

	int arr[m][n];

	printf("Elements:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	float rezultat=0;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			rezultat+=arr[i][j]*arr[i][j];
		}
	}

	printf("\nEuklidska norma: %3f.", sqrt(rezultat));

	return 0;
}

int provera (int m, int n){

	if(n<1 || n>50 || m<1 || m>50){
		return 0;
	}

	return 1;
}
