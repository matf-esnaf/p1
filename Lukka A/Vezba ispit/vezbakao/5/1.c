#include <stdio.h>
#include <stdlib.h>

#define min 1
#define max 99999

int funkcija (int n, int s, int t);

int main(){

	int n, s, t;

	printf("Ulaz:\n");
	scanf("%d %d %d", &n, &s, &t);
	if(n<min || n>max){
		exit(EXIT_FAILURE);
	}

	printf("\nIzlaz:%d\n", funkcija (n, s, t));

	exit(EXIT_SUCCESS);
}

int funkcija (int n, int s, int t){

	if(n==s){
		return 0;
	}
	if(n==t){
		return 1;
	}
	if(n==s+t){
		return 2;
	}

	int j = s + t;

	for(int i=3; j<n; i++){
		int x1 = j + t;
		if(x1==n){
			return i;
		}
		int x2 = x1 + j;
		if(x2==n){
			return i+1;
		}
		j=x1;
	}
	return -1;
}
