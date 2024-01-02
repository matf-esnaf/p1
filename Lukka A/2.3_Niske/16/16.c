#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

int main(){

	int n;

	printf("Unesite jedan broj: ");
	scanf("%d", &n);

	char s[MAX];
	int i=0;
	int c;

	int temp=n;

	if(n<0){
		n=-n;
	}

	for(int n1=n; n1!=0; i++){
		n1=n1/10;
	}

	for(; i>0; n=n/10){
		c=n%10;
		s[i-1] = c + '0';
		i--;
	}


	char minus[MAX];
	minus[0]='-';

	if(temp<0){
		strcat(minus, s);
		printf("Niska: %s.\n", minus);
	}else{
		printf("Niska: %s.\n", s);
	}

	return 0;
}
