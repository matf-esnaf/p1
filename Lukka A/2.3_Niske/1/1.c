#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 11

void konvertuj (char s[]);

int main(){

	char s[MAX];

	printf("Unesite nisku: ");
	scanf("%10s", s);

	konvertuj (s);

	printf("Nova niska: %s", s);

	return 0;
}

void konvertuj (char s[]){

	for(int i=0; s[i]!='\0'; i++){
		if(islower(s[i])){
			s[i]=toupper(s[i]);
		}else if(isupper(s[i])){
			s[i]=tolower(s[i]);
			}
	}
}
