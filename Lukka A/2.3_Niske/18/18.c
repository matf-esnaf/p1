#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int dekadna (char s[]);

int main(){

	char s[8];

	printf("Unesite nisku: ");
	scanf("%7s", s);

	printf("Dekadna vrednost: %d.\n", dekadna (s));

	return 0;
}

int dekadna (char s[]){

	int d = strlen (s);
	int dekadni = 0;
	int stepen = d-2;

	for(int i=2; i<d; i++){
		int vrednost=0;
		if(isdigit(s[i])){
			vrednost = s[i] - '0';
		}else if(isalpha(s[i])){
			vrednost = (toupper (s[i]) - 'A') + 10;
		}
		dekadni=dekadni+((vrednost*(pow(16, stepen-1))));
		stepen--;
	}

	return dekadni;
}
