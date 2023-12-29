#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 21

void ubaci_zvezdice (char s[]);

int main(){

	char s[MAX];

	printf("Unesite nisku: ");
	scanf("%s", s);

	ubaci_zvezdice (s);

	printf("Nova niska: %s.", s);

	return 0;
}

void ubaci_zvezdice (char s[]){

	for(int i=1; s[i]!='\0'; i+=2){
		s[i]='*';
	}
}
