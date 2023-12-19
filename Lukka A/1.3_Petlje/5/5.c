#include <stdio.h>
int main()
{

	int long n, m, faktorijel=1;

	printf("Unesite proizvoljan broj n: ");
		scanf("%ld", &n);

	if(n>0 && n<=22){

	while(n>1){

		faktorijel=n*faktorijel;
		n--;
		
	}
	printf("Faktorijel iznosi: %ld.\n", faktorijel);
	
	}else if(n<0){
		printf("Neispravan unos, negativan broj.\n");
	return 1;
	}else if(n>=22){
		printf("Neispravan unos zbog prekoracenja.\n");
	return 1;
	}

return 0;
}
