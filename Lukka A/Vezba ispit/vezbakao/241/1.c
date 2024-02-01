#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pravougaonik{

	char oznaka;
	char boja[20];
	double duzina;
	double sirina;

};

void lolipop (struct pravougaonik unos[], int n, char s[]);

int main(){

	int n;
	struct pravougaonik unos[20];

	printf("Input:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf(" %c", &unos[i].oznaka);
		scanf("%s", unos[i].boja);
		scanf("%lf", &unos[i].duzina);
		scanf("%lf", &unos[i].sirina);
	}

	char s[20];
	scanf("%s", s);

	lolipop (unos, n, s);


	exit(EXIT_SUCCESS);
}

void lolipop (struct pravougaonik unos[], int n, char s[]){

	double maksimum=0;
	char c='\0';

	for(int i=0; i<n; i++){
		if(strcmp(unos[i].boja, s) == 0){
			double obim = (unos[i].duzina * 2) + (unos[i].sirina *2);
			if(obim>maksimum){
				maksimum=obim;
				c=unos[i].oznaka;
			}
		}
	}

	printf("\n%c\n", c);
}
