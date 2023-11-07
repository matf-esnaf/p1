#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, n1=0, m, m1=0;
	
	printf("Unesite broj cifara koji zelite da unesete kasnije: ");
		scanf("%d", &n);

	if(n<=0){
		printf("Nekorektan unos.\n");
	return 1;
	}

	printf("Unesite %d cifara po zelji: ", n);
	
	while(n1<n){
		scanf("%d", &m);
	if(m<0 && m%2!=0){
		m1+=m;
	}
		n1++;
	}

	printf("Zbir neparnih i negativnih brojeva iznosi: %d.\n", m1);

return 0;
}
