#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

void funkcija (char s[], char t[]);

int main(){

	char s[21];
	char t[21];

	printf("Unesite nisku: ");
	scanf("%s", s);

	funkcija (s, t);

	printf("Vasa niska: %s.", t);

	return 0;
}

void funkcija (char s[], char t[]){

	int i, j;
	int d = strlen (s);

	for(i=0, j=0; i<d; i++){
		t[j]=s[i];
		j++;
		t[j]=s[i];
		j++;
	}
	t[j]='\0';
}
