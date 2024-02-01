#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct poklon{

	int oznaka;
	char vrsta[20];
	double cena;

};

void funkcija (int n, struct poklon struktura1[], struct poklon cilj);

int main(){

	struct poklon struktura1[20];

	int n;

	printf("Input:\n");
	scanf("%d", &n);
	printf("-----------------\n");
	for(int i=0; i<n; i++){
		scanf("%d", &struktura1[i].oznaka);
		scanf("%s", struktura1[i].vrsta);
		scanf("%lf", &struktura1[i].cena);
	}

	printf("-----------------\n");

	struct poklon cilj;

	scanf("%s", cilj.vrsta);
	scanf("%lf", &cilj.cena);

	funkcija (n, struktura1, cilj);

	exit(EXIT_SUCCESS);
}

void funkcija (int n, struct poklon struktura1[], struct poklon cilj){

	for(int i=0; i<n; i++){
		if(strcmp(struktura1[i].vrsta, cilj.vrsta) == 0){
			if(struktura1[i].cena<=cilj.cena){
				printf("%d ", struktura1[i].oznaka);
			}
		}
	}
}
