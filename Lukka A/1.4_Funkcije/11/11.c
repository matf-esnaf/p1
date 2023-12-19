#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sadrzi (int x, int c);

int main(){

int a, b;

	printf("Unesite jedan broj i jednu cifru: ");
		scanf("%d %d", &a, &b);
	
	if(b>9 || b<0){
		printf("Neispravan unos.\n");
		return -1;
	}

	if(sadrzi(a, b) == 0){
		printf("Cifra %d se nalazi u broju %d.\n", b, a);
			return 0;
	}else{
		printf("Cifra %d se ne nalazi u broju %d.\n", b, a);
			return -1;
	}
	
}

int sadrzi (int x, int c){

int b, n=abs(x);

	while(n!=0){
		b=n%10;

	if(b==c){
		return 0;
	}
		n=n/10;
	}

	return -1;
}
