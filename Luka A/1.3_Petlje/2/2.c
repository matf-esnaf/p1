#include <stdio.h>
int main()
{

	int x=0, n;
	
	printf("Unesite broj n: ");
		scanf("%d", &n);

	if(n>0){

	while(x<n){
		x++;
	printf("Mi volimo da programiramo!\n");
	}

	}else{
		printf("Neispravan unos broja.\n");
	}

return 0;
}
