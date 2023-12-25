#include <stdio.h>

#define MAX 50
#define MIN 1

int check (int n);
void min_max (int n, float a[], float *pmin, float *pmax);

int main(){

	int n;

	printf("Unesite dimenziju niza: ");
	scanf("%d", &n);

	if(check(n)==0){
		printf("\n-1\n");
		return -1;
	}

	float a[MAX];

	printf("Unesite elemente niza: ");
	for(int i=0; i<n; i++){
		scanf("%f", &a[i]);
	}

	float min=0, max=0;

	min_max (n, a, &min, &max);

	printf("Najmanji element %.2f.\n", min);
	printf("Najveci element %.2f.\n", max);

	return 0;
}

int check (int n){

	if(n<MIN || n>MAX){
		return 0;
	}

	return 1;
}

void min_max (int n, float a[], float *pmin, float *pmax){

	*pmin=a[0];
	*pmax=a[0];

	for(int i=1; i<n; i++){
		if(*pmin>a[i]){
			*pmin=a[i];
		}
		if(*pmax<a[i]){
			*pmax=a[i];
		}
	}
}	
