#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, n1, br=0, x, x1=0, nbr=0, max;

	printf("Unesite broj n: ");
		scanf("%d", &n);
	if(n<=0){
		printf("Nekorektan unos broja n.\n");
		return 1;
	}

	printf("Unesite brojeve: ");

	for(int n1=0; n1<n; n1++){
		scanf("%d", &x);
	br=0;
	for(int x1=x; x1!=0; x1=x1/10){
		br++;
	}
	if(br>nbr){
		nbr=br;
		max=x;
	}
	}
	
	printf("Broj sa najvise cifara je %d.\n", max);

return 0;
}
