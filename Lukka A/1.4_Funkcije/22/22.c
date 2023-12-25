#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ispis (float x, float y, int n);

int main(){

	float a, b;

	printf("Unesite dva realna broja: ");
		scanf("%f %f", &a, &b);

	if(a==b){
		printf("Neispravan  unos.\n");
		return -1;
	}

	int c;

	printf("Unesite broj n: ");
		scanf("%d", &c);


	if(c<1){
		printf("Neispravan unos.\n");
		return -1;
	}

	ispis (a, b, c);

	return 0;
}

void ispis (float x, float y, int n){

	float interval = (fabs (x - y)) / (n-1);
	int n1=0;

	for (; n1<n; x += interval){
		printf("Sin (%f) iznosi : %f.\n", x,  sin(x));
		n1++;
	}
}
