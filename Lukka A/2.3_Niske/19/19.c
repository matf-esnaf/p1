#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int ucitaj (char s[], int n);

int main(){

	char s[81];
	int n=0;
	char smax[81];
	int nmax=0;

	printf("Ucitaj nisku: ");
	while(fgets(s, sizeof (s), stdin) != NULL){
		s[strcspn(s, "\n")] = '\0';
		n = ucitaj (s, n);
		if(n>nmax){
			nmax=n;
			strcpy (smax, s);
		}
	}

	printf("\nNajduza niska je: %s.\n", smax);
	printf("Duzina najduze niske je %d.", nmax);

	return 0;
}

int ucitaj (char s[], int n){

	int d = strlen (s);

	return d;
}
