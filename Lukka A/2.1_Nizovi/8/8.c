#include <stdio.h>

#define MAX 100

int main(){

	char recenica[MAX];

	printf("Unesite recenicu: ");

	int i=0;
	
	for(; i<MAX; i++){

		scanf("%c", &recenica[i]);

		if(recenica[i]=='\n'){
			break;
		}
	}

	int n=0;

	for(; n<i ; n++){

		int m=0;
		int brojac=0;

		if(recenica[n]==' '){
			continue;
		}

		for(; m<i; m++){ 
			if(recenica[n]==recenica[m]){
				brojac++;
			}
		}
	
		int s=0, ponavljanje=0;

		for(; s<n; s++){
			if(recenica[n]==recenica[s]){
				ponavljanje=1;
				break;
			}
		}

		if(ponavljanje==1){
			continue;
		}

		printf("Karakter %c se pojavljuje %d puta.\n", recenica[n], brojac);
	}
	return 0;
}
