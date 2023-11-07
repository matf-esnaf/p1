#include <stdio.h>
int main()
{

	int x=-1, n;

	printf("Unesite proizvoljan pozitivan broj n: ");
		scanf("%d", &n);

	if(n>0){

	while(x<n){
		x++;
	printf("%d ", x);
	}

	}else{
		printf("Neispravan unos.\n");
	}

return 0;
}
