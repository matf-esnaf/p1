#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float zbir_reciprocnih(int n);
int main(){
int a;
	printf("Unesite broj a: ");
		scanf("%d", &a);
	
	if(a<1){
		printf("Neispravan unos.");
		return -1;
	}

	printf("Zbir reciposnih iznos %f.\n", zbir_reciprocnih(a));

return 0;
}

float zbir_reciprocnih(int n){

float m=0;
	while(n>=1){
		m+=pow(n, -1);		
		n--;
	}
	return m;
	
}
