#include <stdio.h>

#define MAX 100
#define MIN 1

int jednaki (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Neispravan unos dimenzije niza.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Duzina najduze serije istih je %d.", jednaki (a, n));

	return 0;
}

int jednaki (int a[], int n){

	int istih=1, najvise=0;

	for(int i=0; i<n-1; i++){
		if(a[i]==a[i+1]){
			istih++;
		}else{
			if(istih>najvise){
				najvise=istih;
				istih=1;
			}
		}
	}

	if(istih>najvise){
		najvise=istih;
	}

	return najvise;
}
