#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 20

void funkcija (char s[], char c);

int main(){

	char c;
	char s[max];

	printf("Unos: ");
	scanf("%c", &c);
	scanf(" %s", s);

	funkcija (s, c);

	printf("\nIzlaz: %s.\n", s);

	exit(EXIT_SUCCESS);

}

void funkcija (char s[], char c){
	
	int d = strlen (s);
	
	if(c=='e'){
		for(int i=0; i<d; i++){
			if(isupper(s[i]) && s[i]>='X'){
				s[i]='A'+(s[i]-'X');
			}else if(islower(s[i]) && s[i]>='x'){
				s[i]='a'+(s[i]-'x');
			}else{	
				s[i]+=3;
			}
		}
	}else if(c=='d'){
		for(int i=0; i<d; i++){
			if(isupper(s[i]) && s[i]<='C'){
				s[i]='Z'-('C'-s[i]);
			}else if(islower(s[i]) && s[i]<='c'){
				s[i]='z'-('c'-s[i]);
			}
			s[i]-=3;
		}
	}else{
		printf("\n-1\n");
		exit(EXIT_FAILURE);
	}
}
