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
			printf("\n Novi broj: \n  %d \n", ukloni(a, b));

		}

	return 0;
}

int ukloni (int n, int p){

int m=0, l=0, s=0, q=p;

	while(l<n-1){
		m=q%10;
		s=s+m*pow(10, l);
		l++;
		q=q/10;
	}
	
	if(l==n-1){
		s=s%1*pow(10, l);
		p=p-m*pow(10, l);
		p=p/1*pow(10, l);
		p=p*1*pow(10, l);
		p=p+s;
	}

	return p;
}
