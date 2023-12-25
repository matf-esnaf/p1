#include <stdio.h>

int deljenje (int *pa, int *pb);

int main(){

	int a, b;

	printf("Unesite dva broja: ");
	scanf("%d %d", &a, &b);

	int rezultat = deljenje (&a, &b);

	if(rezultat==0){
		printf("-1");
		return -1;
	}else{
		printf("Kolicnik: %d.", a);
		printf("\nOstatak: %d.", b);
	}

	return 0;
}

int deljenje (int *pa, int *pb){

	if(*pa==0 || *pb==0){
		return 0;
	}

	int kolicnik=0, ostatak=0;

	kolicnik = *pa / *pb;
	ostatak = *pa % *pb;

	*pa = kolicnik;
	*pb = ostatak;

	return 1;
}
