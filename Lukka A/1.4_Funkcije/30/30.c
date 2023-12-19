#include <stdio.h>

void grafikon_h (int a, int b, int c, int d);

int main(){

int x, y, z, w;

	printf("Unesite 4 broja: ");
		scanf("%d %d %d %d", &x, &y, &z, &w);

	if(x<1 || y<1 || z<1 || w<1){
		printf("Neispravan unos.\n");
		return -1;
	}

	grafikon_h (x, y, z, w );

	return 0;
}

void grafikon_h (int a, int b, int c, int d){

	while(a!=0){
		printf("*");
		a--;
	}

	printf("\n");

	while(b!=0){
		printf("*");
		b--;
	}

	printf("\n");
	
	while(c!=0){
		printf("*");
		c--;
	}

	printf("\n");

	while(d!=0){
		printf("*");
		d--;
	}
}
