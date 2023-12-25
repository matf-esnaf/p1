#include <stdio.h>

#define MAX 100
#define MIN 1

void spoj_sortirano (int a[], int b[], int n, int c[]);

int main(){

	int a[MAX], b[MAX], c[MAX], n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Nekorektan unos dimenzije niza.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]);
	}

	spoj_sortirano (a, b, n, c);

	return 0;
}

void spoj_sortirano (int a[], int b[], int n, int c[]){

	for(int i=0; i<n; i++){
		c[i]=a[i];
	}

	for(int i=0; i<n; i++){
		c[n+i]=b[i];
	}

	int temp;

	for(int i=0; i<2*n; i++){
		for(int k=i+1; k<2*n; k++){
			if(c[i]>c[k]){
				temp=c[k];
				c[k]=c[i];
				c[i]=temp;
			}
		}
	}
	
	for(int i=0; i<2*n; i++){
		printf("%d, ", c[i]);
	}

}
