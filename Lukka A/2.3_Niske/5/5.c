#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 21

int sadrzi_veliko (char s[]);

int main(){

	char s[MAX];

	printf("Unesite nisku: ");
	scanf("%20s", s);

	int rezultat = sadrzi_veliko (s);

	if(rezultat == 0){
		printf("Nema veliko slovo.\n");
		return -1;
	}else{
		printf("Ima veliko slovo.\n");
	}
}

int sadrzi_veliko (char s[]){

	for(int i=0; s[i]!='\0'; i++){
		if(isupper(s[i])){
			return 1;
		}
	}
	return 0;
}
