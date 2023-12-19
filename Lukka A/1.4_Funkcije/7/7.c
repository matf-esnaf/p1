#include <stdio.h>
int prebrojavanje (float x);
int main(){

	float a;

	printf("Unesite broj a: ");
		scanf("%f", &a);

	printf("Broj ponavljanja broja %.2f je %d.\n", a, prebrojavanje(a));

return 0;
}

int prebrojavanje (float x){

	float y;
	int z=0;

	printf("Unesite brojeve (unos zavrsavate sa nulom): ");
		while(y!=0){
			scanf("%f", &y);
		if(y==x){
		z++;
		}
		}

	return z;
}
