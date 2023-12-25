#include <stdio.h>

#define MAX 200
#define MIN 1

int main(){

	int n;

	printf("Unesite broj autobusa: ");
	scanf("%d", &n);

	if(n<MIN || n>MAX){
		printf("Greska pri unosu broja autobusa.\n");
		return -1;
	}

	int i=0;
	int niz[MAX];

	printf("Unesite vreme putovanja: ");

	for(; i<n; i++){
		scanf("%d", &niz[i]);
	}

	i=0;

	int k, m, t;

	printf("Unesite vrednosti k, m i t: ");
	scanf("%d %d %d", &k, &m, &t);

	if(k>n || m>n){
		printf("Greska pri unosu. \n");
		return -1;
	}

	for(; k<m; k++){
		niz[k]+=t;
	}

	printf("Novo vreme putovanja: ");

	for(; i<n; i++){
		printf("%d ", niz[i]);
	}


	return 0;
}
