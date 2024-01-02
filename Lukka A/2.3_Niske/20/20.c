#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int procitaj (char s[], int n);
void prebroj (char s[], int *nsmall, int *nbig);

int main(){

	char s[81];
	int n=0;
	int nmax=0;
	char smax[81];
	int naps=0, napsmax=0;
	char apsstring[81];

	printf("Unesite nisku: ");
	while(fgets(s, sizeof (s), stdin) != NULL){
		s[strcspn (s, ".")] = '\0';
		n = procitaj (s, n);
		if(n>nmax){
			nmax=n;
			strcpy (smax, s);
		}
		
		int nsmall=0, nbig=0;

		prebroj (s, &nsmall, &nbig);
		naps = abs (nsmall - nbig);
		if(naps>napsmax){
			napsmax=naps;
			strcpy (apsstring , s);
		}
	}

	printf("\nNajduza niska: %s.\n", smax);
	printf("\nNiska sa najvecom razlikom malih i velikih slova: %s.\n", apsstring);

	return 0;
}

int procitaj (char s[], int n){

	n = strlen (s);

	return n;
}

void prebroj (char s[], int *nsmall, int *nbig){

	int d = strlen (s);

	for(int i=0; i<d; i++){
		if(isalpha(s[i])){
			if(s[i] >= 'a' && s[i] <= 'z'){
				(*nsmall)++;
			}
			if(s[i] >= 'A' && s[i] <= 'Z'){
				(*nbig)++;
			}
		}
	}
}

