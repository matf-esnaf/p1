#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100
#define min 1

int funkcija (int s[max][max], int n);

int main(){

	int n;
	int s[max][max];

	printf("Input:\n");
	scanf("%d", &n);
	if(n<min || n>max){
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &s[i][j]);
		}
	}

	printf("\n%d\n", funkcija (s, n));

	exit(EXIT_SUCCESS);
}

int funkcija (int s[max][max], int n){
	
	int sum1=0, sum2=0;

	int temp = n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			sum1+=s[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			sum2+=s[i][j];
		}
	}

	int zbir=0, proizvod=1;

	if(sum1==sum2){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				zbir+=s[i][j];
			}
		}
		return zbir;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			proizvod*=s[i][j];
		}
	}
	return proizvod;
}
