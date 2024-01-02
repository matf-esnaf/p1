#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* klon (char s[], char c);

int main(){

	char s[21];

	printf("Unesite nisku: ");
	scanf("%20s", s);

	char c;

	printf("Unesite karakter: ");
	scanf(" %c", &c);

	char* pozicija = klon (s, c);

	printf("Pozicija: %p", (void*) pozicija);

	return 0;
}

char* klon (char s[], char c){

	int d = strlen (s);

	for(int i=0; i<d; i++){
		if(s[i]==c){
			return &s[i];
			}
	}

	return NULL;
}
