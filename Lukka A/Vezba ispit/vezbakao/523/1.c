#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100

void funkcija (int n, int s[]);

int main(){

	int n;
	int s[max];

	printf("Ulaz:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &s[i]);
	}

	funkcija (n, s);

	printf("\n");

	for(int i=0; i<n; i++){
		printf("%d ", s[i]);
	}

	exit(EXIT_SUCCESS);
}

void funkcija (int n, int s[]){

	int sum=0;

	for(int i=0; i<n; i++){
		sum+=s[i];
	}

	int modul = sum / n;

	while(sum%n!=0){
		s[modul]--;
		sum--;
	}
}
