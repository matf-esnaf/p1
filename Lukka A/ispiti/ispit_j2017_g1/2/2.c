#include <stdio.h>
#include <ctype.h>
#include <string.h>

void funkcija (char s[], char lista[]);

int main(){

	char s[21];
	char lista[200];

	printf("Ulaz until EOF: ");
	while (scanf("%20s", s) != EOF){
		funkcija(s, lista);
	}	

	printf("\nIzlaz: %s", lista);

	return 0;
}

void funkcija (char s[], char lista[]){

	char prog[] = "programiranje";

	int d = strlen (prog);
	int d1 = strlen (s);

	int brojac=0;

	for(int i=0; i<d1; i++){
		int pronadjen = 0;
		for(int j=0; j<d; j++){
			if(tolower(s[i])==prog[j]){
				for(int k=0; k<=j;k++){
					prog[k]='0';
				}
				pronadjen = 1;
				break;
			}
		}
		if(pronadjen!=1){
			break;
		}
		brojac++;
	}

	if(brojac==d1){
		strcat(lista, s);
		strcat(lista, " ");	
	}
}
