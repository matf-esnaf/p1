#include <stdio.h>
#include <stdlib.h>

#define MAX 21

int samoglasnik (char c);
int samoglasnik_kraj (char s[]);

int main(){

	char s[MAX];

	printf("Unesite nisku: ");
	scanf("%s", s);

	int rezultat = samoglasnik_kraj (s);

	if(rezultat==0){
		printf("Ne zavrsava se samoglasnikom.\n");
		return -1;
	}else{
		printf("Zavrsava se samoglasnikom.\n");
		return 0;
	}
}

int samoglasnik (char c){

	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
		return 1;
	}

	return 0;
}

int samoglasnik_kraj (char s[]){

	int br=0;

	for(int i=0; s[i]!='\0'; i++){
		br++;
	}

	int rezultat = samoglasnik (s[br-1]);

	if(rezultat!=1){
		return 0;
	}

	return 1;
}
