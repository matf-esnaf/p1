#include <stdio.h>

#define MAX 100
#define MIN 1

void zamena (int a[], int n);

int main(){

	int a[MAX], n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu dimenzije niza.\n");
		return -1;
	}

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	zamena (a, n);

	return 0;
}

void zamena (int a[], int n){

	int najmanji=a[0], najveci=a[0];
	int indeksm=0, indeksv=0;

	for(int i=1; i<n; i++){
		if(a[i]<najmanji){
			najmanji=a[i];
			indeksm=i;
		}
		if(a[i]>najveci){
			najveci=a[i];
			indeksv=i;
		}
	}

	int temp;

	temp=a[indeksm];
	a[indeksm]=a[indeksv];
	a[indeksv]=temp;

	printf("\n Novi niz: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
