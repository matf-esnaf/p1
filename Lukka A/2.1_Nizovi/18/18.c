#include <stdio.h>
#include <ctype.h>

#define MAX 200
#define MIN 1

int palindrom (char a[], int n);

int main(){

	char a[MAX];
	int n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf(" %c", &a[i]);
		if(isupper(a[i])){
			a[i]=tolower(a[i]);
		}
	}

	if(palindrom (a, n) == 0){
		printf("Nije palindrom.\n");
		return -1;
	}if(palindrom (a, n) == 1){
		printf("Jeste palindom.\n");
		return 0;
	}
}

int palindrom (char a[], int n){

	int i=0, n1=n-1;

	for(; i<n1; i++, n1--){
		if(a[i]!=a[n1]){
			return 0;
		}
	}

	return 1;
}
