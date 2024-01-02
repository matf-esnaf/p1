#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 11

int podniska (char s[], char t[]);

int main(){

	char s[MAX], t[MAX];

	printf("Unesite nisku broj 1: ");
	scanf("%10s", s);

	printf("Unesite nisku broj 2: ");
	scanf(" %10s", t);

	if(podniska(s, t)==1){
		printf("Jeste podniska.\n");
		return 0;
	}else{
		printf("Nije podniska.\n");
		return -1;
	}
}

int podniska (char s[], char t[]){

	int duzina = strlen (t);

	int rezultat = strncmp (s, t, duzina);

	if(rezultat == 0){
		return 1;
	}

	return 0;
}
