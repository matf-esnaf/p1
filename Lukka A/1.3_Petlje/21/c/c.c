#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, max;
	
	printf("Unesite broj n: ");
		scanf("%d", &n);

	if(n<0){
		printf("Nekorektan unos.\n");
		return 1;
	}else if(n==0){
		printf("Nisu uneti brojevi.\n");
		return 1;
	}

	printf("Unesite n brojeva: ");

	int c1, c2=-1;

	for(int n1=0; n1<n; n1++){
		int x;
		scanf("%d", &x);
		int x1=abs(x);	
	while(x1>=10){
		x1=x1/10;
	}
		c1=x1;
	if(c1>c2){
		c2=c1;
		max=x;
	}
	}

	printf("Broj sa najvecom vodecom cifre je %d.\n", max);

return 0;
}
