#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ukloni (char *s);

int main(){

	char s[101];

	printf("Unesite nisku: ");
	scanf("%[^\n]", s);

	ukloni (s);

	printf("Izmenjena niska %s.\n", s);

	return 0;
}

void ukloni (char *s){

	int d = strlen (s);
	int i, j;

	printf("\nBROJ KARAKTERA STRINGA: %d\n", d);

	for(i=0, j=0; i<d; i++){
		if(s[i]==' '){
			s[j]=' ';
			j++;
		}
		else if(tolower(s[i]) > (s[i+1])){
			s[j]=s[i];
			j++;
		}
	}
	s[j]='\0';
}
