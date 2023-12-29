#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 21

int jednake (char s1[], char s2[]);
void velika (char s1[], char s2[]);

int main(){

	char s1[MAX], s2[MAX];

	printf("Unesite niske: \n");
	scanf("%s %s", s1, s2);

	velika (s1, s2);

	int rezultat = jednake (s1, s2);

	if(rezultat == 0){
		printf("Nisu jednake.\n");
		return -1;
	}else{
		printf("Jesu jednake.\n");
	}

	return 0;
}

void velika (char s1[], char s2[]){

	for(int i=0; s1[i]!='\0'; i++){
		if(islower(s1[i])){
			s1[i]=toupper(s1[i]);
		}
	}

	for(int i=0; s2[i]!='\0'; i++){
		if(islower(s2[i])){
			s2[i]=toupper(s2[i]);
		}
	}
}

int jednake (char s1[], char s2[]){

	for(int i=0; s1[i]!='\0' || s2[i]!='\0'; i++){
		if(s1[i]!=s2[i]){
			return 0;
		}
	}

	return 1;
}
