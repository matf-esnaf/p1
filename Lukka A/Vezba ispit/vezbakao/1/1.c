#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funkcija (int n);

int main(){

	int n;

	printf("Unos: ");
	scanf("%d", &n);

	if(funkcija (n) == 1){
		printf("\nDA\n");
		exit(EXIT_SUCCESS);
	}else{
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}
}

int funkcija (int n){

	int m = 0;

	for(int n1=n; n1!=0; m++){
		n1/=10;
	}

	int temp = 0;

	for(int c=0, n1=n; n1!=0; n1/=10){
		c = n1 % 10;
		temp += pow (c, m);
	}

	if(temp!=n){
		return 0;
	}

	return 1;
}
