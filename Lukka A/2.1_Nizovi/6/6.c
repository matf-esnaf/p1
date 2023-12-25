#include <stdio.h>

int main(){

	int n;

	printf("Unesite jedan broj: ");
	scanf("%d", &n);

	int n1=n, brc=0;
	int niz[100];
	int c=0;

	for(; n1!=0; brc++){
		c=n1%10;
		niz[brc]=c;
		n1=n1/10;
	}

	int i=0, k=0, istih=0;

	for(; i<brc; i++){
		printf("U Zapisu broja %d, ",n );
		for(; k<brc; k++){
			if(niz[i]==niz[k]){
				istih++;
			}
		}
			printf("se broj %d ponavlja %d puta.\n", niz[i], istih);
			istih=0;
			k=0;
	}
	return 0;
}
