#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 21

int karakter (char c, char s[]);

int main(){

	char c, s[MAX];

	printf("Unesite nisku: ");
	scanf("%20s", s);

	printf("Unesite karakter: ");
	scanf(" %c", &c);

	int rezultat = karakter (c, s);

	if(rezultat == 0){
		printf("Ne sadrzi karakter.\n");
		return -1;
	}else{
		printf("Sadrzi karakter.\n");
		return 0;
	}
}

int karakter (char c, char s[]){

	for(int i=0; s[i]!='\0'; i++){
		if(c==s[i]){
			return 1;
		}
	}
	return 0;
}
