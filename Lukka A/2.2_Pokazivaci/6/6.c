#include <stdio.h>

void brojac (char c, int *pz, int *pt);

int main(){

	int z=0, t=0;
	char c;

	printf("Unesite tekst:\n");
	while((scanf("%c", &c)) != EOF){
		brojac (c, &z, &t);
	}

	printf("\nBroj pojavljivanja tacke je %d.", t);
	printf("\nBroj pojavljivanja zareza je %d.", z);

	return 0;
}

void brojac (char c, int *pz, int *pt){

	if(c==','){
		(*pz)++;
	}

	if(c=='.'){
		(*pt)++;
	}

}
