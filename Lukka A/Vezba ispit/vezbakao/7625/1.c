#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define min 1
#define max 20

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

	for(int i=0, j=d-1; i<j; i++, j--){
		if(tolower(s[i])!=tolower(s[j])){
			return;
		}
	}

	strcat(s1, s);
	strcat(s1, " ");
}
