#include <stdio.h>
#include <ctype.h>

#define	MAX 100

int main(){

	char c[MAX];

	int i=0;

	printf("Unesite recenicu: ");
	
	for(; i<MAX; i++){
		scanf("%c", &c[i]);

		if(isupper(c[i])){
			c[i]=tolower(c[i]);
		}

		if(c[i]=='\n'){
			break;
		}
	}

	for(char slovo='a'; slovo<='z'; slovo++){

	int brojac=0;
	int n=0;

		for(; n<=i; n++){
			if(slovo==c[n]){
				brojac++;
			}
		}
	
		printf("%c: %d.\t", slovo, brojac);
	}
	return 0;
}
