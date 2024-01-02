#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ukloni (char s[]);

int main(){

	char s[21];

	printf("Unesite nisku: ");
	scanf("%s", s);

	ukloni (s);

	printf("Nova niska je %s.\n", s);

	return 0;
}

void ukloni (char s[]){

	int duzina = strlen (s);
	char t[21];
	int l=0;

	for(int i=0; i<duzina; i++){
		if(isdigit(s[i])){
			t[l]=s[i];
			l++;
		}
	}
	strcpy(s ,t);
}
