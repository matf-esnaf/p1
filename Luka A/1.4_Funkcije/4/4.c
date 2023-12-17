#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int je_stepen(unsigned x, unsigned n);
int main(){

	unsigned a, b;

	printf("Unesite dva broja: ");
		scanf("%u %u", &a, &b);


	int rezultat = je_stepen(a, b);
	if(rezultat == -1){
		printf("%u nije stepen broja %u.", b, a);
		return -1;
	}else{
		printf("Jeste stepen. %u = %u ^ %u.\n", a, b, je_stepen(a, b));
		return 0;
	}
}

int je_stepen(unsigned x, unsigned n){

unsigned s=1;

	while(x>=pow(n, s)){
		
		if(x==pow(n, s)){

		return s;
		
		}else if(n<x){
		s++;
		}
	}
	
		return -1;

}
