#include <stdio.h>

#define MAX 100
#define MIN 1

int podniz (int a[], int b[], int n, int m);
int uzastopni (int a[], int b[], int n, int m);

int main(){

	int a[MAX], b[MAX], n, m;

	printf("Unesite dimenziju prvog niza: ");
	scanf("%d", &n);

	printf("Unesite elemente prvog niza: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Unesite dimenziju drugog niza: ");
	scanf("%d", &m);

	printf("Unesite elemente drugog niza: ");
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
	}

	int rezultat1 = podniz (a, b, n, m);
	int rezultat2 = uzastopni (a, b, n, m);

	if(rezultat1 == 1){
		printf("Elementi drugog jesu elementi prvog.\n");
	}else{
		printf("Elementi drugog nisu elementi prvog.\n");
		printf("Elementi drugog nisu uzastopni elementi prvog.\n");
		return -1;
	}

	if(rezultat2 == 1){
		printf("Elementi drugog jesu uzastopni elemtni prvog.\n");
		return 0;
	}else{
		printf("Elementi drugog nisu uzastopni elementi prvog.\n");
		return -1;
	}
	return 0;
}

int podniz (int a[], int b[], int n, int m){

	int brojac=0;

	for(int i=0; i<n; i++){
		for(int k=0; k<m; k++){
			if(a[i]==b[k]){
				brojac++;
				if(m==brojac){
					return 1;
				}
			}
		}
	}

	return 0;
}

int uzastopni (int a[], int b[], int n, int m){

	int brojac=0, temp;

	for(int i=0; i<n; i++){
		temp=i;
		for(int k=0; k<m; k++){
			while(a[i]==b[k]){
				brojac++;
				i++;
				k++;
			}if(m==brojac){
				return 1;
			}else{
				i=temp;
				brojac=0;
			}
		}
	}

	return 0;
}
