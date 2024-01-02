#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 21

void prebroj (char s[], char c);

int main(){

	char s[MAX];

	printf("Unesite nisku: ");
	scanf("%20s", s);

	char c;

	printf("Unesite karakter: ");
	scanf(" %c", &c);

	prebroj (s, c);

	return 0;
}

void prebroj (char s[], char c){

	int i=0;

	for(; s[i]!='\0'; i++){
		if(s[i]==c){
			break;
			}
	}

	if(s[i]!=c){
		printf("-1");
	}else{
		printf("Pozicija: %d.\n", i);
	}
}
