#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 20
#define min 1

void funkcija (int s[max][max], int n);

int main(){

	int n;
	int s[max][max];

	printf("Ulaz:\n");
	scanf("%d", &n);
	if(n<min || n>max){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}

	funkcija (s, n);

	printf("Izlaz:\n");

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}


	exit(EXIT_SUCCESS);
}

void funkcija (int s[max][max], int n){

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i){
				s[i][j]=1;
			}else{
			s[i][j]=s[i-1][j-1]+s[i-1][j];
			}
		}
	}
}
