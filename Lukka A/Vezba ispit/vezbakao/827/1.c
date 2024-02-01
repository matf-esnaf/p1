#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 30

int brojanje (char s[], char s1[]);

int main(){

	char s[max];
	char s1[max];

	printf("Input:\n");
	scanf(" %s", s);
	scanf(" %s", s1);

	printf("\n%d\n", brojanje (s, s1));

	exit(EXIT_SUCCESS);
}

int brojanje (char s[], char s1[]){

	int d = strlen (s);
	int d1 = strlen (s1);

	int brojac=0;

	for(int i=0; i<d; i++){
		if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
			int novi = 1;
			for(int j=0; j<d1; j++){
				if(tolower(s[i])==tolower(s1[j])){
					novi = 0;	
					break;
				}
			}
			if(novi){
				brojac++;
				s[i]='?';
			}
		}
	}

	return brojac;
}
