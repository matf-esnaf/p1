#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 20

int funkcija (char s[]);

int main(){

	char s[max];
	int proizvod = 1;

	printf("Ulaz:\n");
	while(fgets(s, sizeof (s), stdin) != NULL){
		s[strcspn(s, "\n")] = '\0';
		s[strcspn(s, " ")] = '\0';
		int temp = funkcija (s);
		proizvod=proizvod*temp;
	}

	printf("\n%d\n", proizvod);

	exit(EXIT_SUCCESS);
}

int funkcija (char s[]){

	int d = strlen (s);

	int kurac = 1;

	for(int i=0; i<d; i++){
		if(isalpha(s[i])){
			return 1;
		}
	}

	for(int i=0; i<d; i++){
		kurac=kurac*(s[i]-'0');
	}
	return kurac;
}
