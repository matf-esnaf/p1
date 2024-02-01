#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 50
#define min 1

void funkcija (int a[max][max], int m, int n, char a1[max]);

int main(){

	int m, n;

	printf("m x n: ");
	scanf("%d %d", &m, &n);

	if(m<min || m>max || n<min || n>max){
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
	
	char a1[max] = " ";

	funkcija (a, m, n, a1);

	printf("Exit: %s.", a1);

	exit(EXIT_SUCCESS);
}

void funkcija (int a[max][max], int m, int n, char a1[max]){

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i=0 && j=0 || i=m && j=n){
				if(

			if(a[i][j]==a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]){
				char temp[10];
				sprintf(temp, " %d %d\n", i, j);
				strcat (a1, temp);
			}
		}
	}
}
