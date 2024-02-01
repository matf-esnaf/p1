#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 10

struct jelka{

	char oblik[20];
	char boja[20];
	int broj;

};

void funkcija (struct jelka jelkica[], int x, struct jelka cilj);

int main(){

	int x;

	printf("Ulaz:\n");
	scanf("%d", &x);

	struct jelka jelkica[max];

	for(int i=0; i<x; i++){
		scanf("%s", jelkica[i].oblik);
		scanf("%s", jelkica[i].boja);
		scanf("%d", &jelkica[i].broj);
	}

	struct jelka cilj;

	scanf("%s", cilj.boja);
	scanf("%d", &cilj.broj);

	funkcija (jelkica, x, cilj);

	int n;
	char s[20];

	scanf("%d", &n);
	scanf("%s", s);

}

void funkcija (struct jelka jelkica[], int x, struct jelka cilj){

	int brojac=0;

	for(int i=0; i<x; i++){
		if(strcmp(jelkica[i].boja, cilj.boja)==0){
			if(jelkica[i].broj>cilj.broj){
				brojac++;
				}
		}
	}

	printf("\n%d\n", brojac);

	exit(EXIT_SUCCESS);
}
