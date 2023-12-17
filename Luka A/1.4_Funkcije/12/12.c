#include <stdio.h>

int broj_neparnih_cifara (int n);

int main(){

int a;

	printf("Unesite cele brojeve: \n");

	while(a!=0){

		scanf("%d", &a);
		printf("Broj neparnih cifara: %d.\n", broj_neparnih_cifara(a));
	
	}
	
	return 0;
}

int broj_neparnih_cifara (int n){;

int m=n, k=0;

	while(m!=0){

		m=n%10;

		if(m%2!=0){

		k++;

		}	
	
		n=n/10;
	}
	
	return k;
}
