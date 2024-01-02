#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void provera (int n, int s[], int *k);

int main(){

	int n;
	int s[100];
	int k=0;

	printf("Unesite brojeve do kraja ulaza: ");
	while(scanf("%d", &n) != EOF){
		provera (n, s, &k);
	}

	printf("\nIzlaz: ");
	for(int j=0; j<k; j++){
		printf(" %d,", s[j]);
	}

	return 0;
}

void provera (int n, int s[], int *k){

	int temp=-1;
	int n1 = abs(n);

	for(int i=0; n1>0; n1/=10){
		int c=n1%10;
		if(temp!=-1){
			if(c>=temp){
				return;
			}
		}
		temp = c;
	}

	s[(*k)++]=n;
}
