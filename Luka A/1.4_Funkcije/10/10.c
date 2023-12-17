#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float aritmeticka_sredina (int n);

int main(){

float x;

	printf("Unesite broj: ");
		scanf("%f", &x);

	printf("Aritmeticka sredina cifara iznosi %.3f.\n", aritmeticka_sredina (x));

	return 0;
}

float aritmeticka_sredina (int n){
	
float l=0, p=0, m=0;

	while(n!=0){
		m=n%10;
		l++;
		p+=m;
		n=n/10;
	}

float k=p/l;

	return fabsf(k);	

}
