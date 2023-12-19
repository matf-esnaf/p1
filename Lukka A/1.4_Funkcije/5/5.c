#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int euklid(int x, int y);
int main(){

int a, b;

	printf("Unesite dva broja: ");
		scanf("%d %d", &a, &b);

	int rezultat = abs((euklid(a, b)));

	if(rezultat==-1){
		printf("Ne postoji zajedinicki delilac za unesena dva broja.\n");
		return -1;
	}else{
		printf("Najvezi zajedinicki delilac za unesena dva broja je %d.\n", rezultat);
		return 0;
	}

}

int euklid(int x, int y){

	int z;

	while(x%y!=0){
		z=x%y;
		x=y;
		y=z;
	}if(x%y==0){
		return z;
	}

	return -1;
}
