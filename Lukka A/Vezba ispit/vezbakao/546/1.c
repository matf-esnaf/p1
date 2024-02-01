#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct imecep{

	char ime[20];
	int cep;

};

void kurac (struct imecep struktura[], int n);

int main(){

	printf("Input:\n");

	int n;
	struct imecep struktura[20];

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", struktura[i].ime);
		scanf("%d", &struktura[i].cep);
	}

	kurac (struktura, n);

	exit(EXIT_SUCCESS);
}

void kurac (struct imecep struktura[], int n){

	int indeks;
	int maksimum=0;

	for(int i=0; i<n; i++){
		if(struktura[i].cep / 3 == 0){
			continue;
		}
		if((struktura[i].cep)/3>=maksimum){
			maksimum=struktura[i].cep/3;
			indeks=i;
		}
	}

	if(maksimum==0){
		printf("\n\n");
		exit(EXIT_FAILURE);
	}

	printf("%s", struktura[indeks].ime);
	printf(" %d", struktura[indeks].cep/3);
}
