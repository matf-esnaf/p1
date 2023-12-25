#include <stdio.h>

#define MAX 255
#define MIN 0

void tocmy (float *pr, float *pg, float *pb);
int korektno (int a);

int main(){

	float r, g, b;

	printf("Unesite RGB: ");
	scanf("%f %f %f", &r, &g, &b);

	if(korektno (r) == 0 || korektno (g) == 0 || korektno (b) ==0){
		printf("\n-1");
		return -1;
	}

	tocmy (&r, &g, &b);

	printf("cmy: (C:%.2f; M:%.2f; Y:%.2f)", r, g, b);

	return 0;
}

int korektno (int a){

	if(a<MIN || a>MAX){
		return 0;
	}
	return 1;
}

void tocmy (float *pr, float *pg, float *pb){

	*pr=1-*pr/255;
	*pg=1-*pg/255;
	*pb=1-*pb/255;

}
