#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, n1=0, x1, x2=0, max, c1=0, c2=0;

	printf("Unesite broj n: ");
		scanf("%d", &n);

	if(n<=0){
		printf("Nekorektan unos broja n.\n");
	return 1;
	}

	printf("Unesite n brojeva: ");

	for(int n1=0; n1<n; n1++){
		scanf("%d", &x1);
	c1=(abs(x1)%100)/10;
	if(c1>c2){
		max=x1;
		c2=c1;
	}
	}
	
	printf("Broj sa najvecom cifom desetica je %d.\n", max);
	
return 0;
}
