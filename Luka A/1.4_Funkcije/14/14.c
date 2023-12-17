#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ukloni (int n, int p);

int main(){

int a, b;

	printf("Unesite poziciju: ");
		scanf("%d", &a);

	if(a==0){
		printf("Greska pri unosu.\n");
		return -1;
	}


	
	printf("Unesite broj (unos zavrsavate nulom): ");		
		while(b!=0){
			scanf("%d", &b);
			printf("\n Novi broj: %d \n", ukloni(b, a));

		}

	return 0;
}

int ukloni (int n, int p){

int m=0, l=1;

	return n;
}
