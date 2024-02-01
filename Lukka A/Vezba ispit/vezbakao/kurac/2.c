#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define max 30

void funkcija (char s[], char s1[]);

int main(){

	char s[max];
	char s1[max]="";

	printf("Ulaz:\n");
	while(scanf("%s", s) != EOF){
		funkcija (s, s1);
	}

	printf("\n%s\n", s1);

	exit(EXIT_SUCCESS);
}

void funkcija (char s[], char s1[]){

	int d = strlen (s);

	for(int i=0; i<d; i++){
		if(tolower(s[i])!='a' && tolower(s[i])!='e' && tolower(s[i])!='i' && tolower(s[i])!='o' && tolower(s[i])!='u'){
			return;
		}
	}

	char razmak[] = " ";

	strcat(s1, s);
	strcat(s1, razmak);
}
