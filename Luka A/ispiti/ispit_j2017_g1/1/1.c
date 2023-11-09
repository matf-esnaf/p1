#include <stdio.h>
#include <math.h>
int main()
{
	int xpre, xposle=0, faktor=-1, cifra=0, novacifra=0;

	printf("Unesite proizvoljan broj: ");
		scanf("%d", &xpre);

	while(xpre!=0){
		cifra=xpre%10;
	if(cifra%2!=0){
		faktor++;
		novacifra=cifra*pow(10, faktor);
		xposle+=novacifra;
	}
	xpre=xpre/10;
	}
	printf("Novi dobijeni broj nakon izbacivanja parnih cifara je: %d.\n", xposle);
	
return 0;
}
