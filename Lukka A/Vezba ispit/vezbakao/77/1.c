#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 20

void funkcija (char s[], char s1[]);

int main(){

	char s[max];
	char s1[max];

	printf("Ulaz:\n");
	while(fgets(s, sizeof(s), stdin)!=NULL){
		s[strcspn(s, "\n")]='\0';
		//s[strcspn(s, " ")]='\0';
		funkcija (s, s1);
	}

	printf("\n%s\n", s1);

	exit(EXIT_SUCCESS);
}

void funkcija (char s[], char s1[]){

	if(s[0]!='0' || s[1]!='x' || s[1]!='x'){
		return;
	}

	int d = strlen (s);

	for(int i=2; i<d; i++){
		if(isxdigit(tolower(s[i]))){
			continue;
		}else{
			return;
		}
	}

	strcat (s1, s);
}
