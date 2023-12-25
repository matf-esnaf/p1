#include <stdio.h>

#define MAX 50
#define MIN 1

int check (int n);
void par_nepar (int a[], int n, int parni[], int *np, int neparni[], int *nn);

int main(){

	int n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(check(n)==0){
		printf("\n-1\n");
		return -1;
	}

	int a[MAX];

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	int parni[MAX], np=0, neparni[MAX], nn=0;

	par_nepar (a, n, parni, &np, neparni, &nn);

	printf("\nNiz parnih brojeva: ");
	for(int i=0; i<np; i++){
		printf("%d ", parni[i]);
	}

	printf("\nNiz neparnih brojeva: ");
	for(int i=0; i<nn; i++){
		printf("%d ", neparni[i]);
	}

	return 0;
}

int check (int n){

	if(n<MIN || n>MAX){
		return 0;
	}

	return 1;
}

void par_nepar (int a[], int n, int parni[], int *np, int neparni[], int *nn){
	
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			parni[*np]=a[i];
			(*np)++;
		}
	}

	for(int i=0; i<n; i++){
		if(a[i]%2!=0){
			neparni[*nn]=a[i];
			(*nn)++;
		}
	}
}
