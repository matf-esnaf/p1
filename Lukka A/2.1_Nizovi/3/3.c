#include <stdio.h>

#define MAX 100
#define MIN 1

int main(){

	int n, i=0;

	printf("Unesite dimenziju vektora: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Neispravan unos.\n");
		return -1;
	}

	int vektor_a[MAX], vektor_b[MAX];

	printf("Unesite koordinate vektora a: ");
	for(; i<n; i++){
		scanf("%d", &vektor_a[i]);
	}

	i=0;

	printf("Unesite koordinate vektora b: ");
	for(; i<n; i++){
		scanf("%d", &vektor_b[i]);
	}

	i=0;

	int skalarni_proizvod=0;

	for(; i<n; i++){
		skalarni_proizvod+=(vektor_a[i]*vektor_b[i]);
	}

	printf("Skalarni proizvod vektora a i b iznos %d.\n", skalarni_proizvod);

	return 0;
}
