#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void provera (char s[], char c);

int main(){

	char s[21];
	char c;

	printf("Unesite rec: ");
	scanf("%20s", s);

	printf("Unesite karakter: ");
	scanf(" %c", &c);

	if(c!='v' && c!='V' && c!='m' && c!='M' && c!='o' && c!='O' ){
		printf("-1");
		return -1;
	}

	provera (s, c);

	printf("%s", s);

	return 0;
}

void provera (char s[], char c){

	int d = strlen (s);

	if(c=='m' || c=='M'){
		for(int i=0; i<d; i++){
			if(islower(s[i])){
				s[i]=toupper(s[i]);
			}
		}
	}

	if(c=='v' || c=='V'){
		for(int i=0; i<d; i++){
			if(isupper(s[i])){
				s[i]=tolower(s[i]);
			}
		}
	}
}
