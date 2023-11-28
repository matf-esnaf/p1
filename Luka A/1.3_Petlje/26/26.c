#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Unesite broj n: ");
		scanf("%d", &n);

	if(n<=0){
		printf("Greska: neispravan unos.");
		return 1;
	}
	
	int n1=n, brojac=0, c1, c2, c3, c1p=0, c2p=0;

	while(n1!=0){
		brojac++;

	c1=n1%10;
	c2=(n1%100)/10;
	c3=(n1%1000)/10;

	if(c2=c1p+c2p){
		novibroj=pow




	c1p=c1;
	}
	printf("Brojac je %d.\n", brojac);
return 0;
}
