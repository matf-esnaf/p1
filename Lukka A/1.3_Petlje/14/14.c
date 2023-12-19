#include <stdio.h>
int main()
{
	int n=1, x;

	printf("Unesite brojeve po zelji: ");
	
	while(x!=0){
		scanf("%d", &x);
	if(x>=1){
		n=n*x;
	}
	}

	//treba da se ispravi else if kod ni jedan pozitivan i ni jedan broj al mi se izuetno mnogo spava pa mi je mucno to sad da radim

	if(n==1 && x<0){
		printf("Nije unesen ni jedan pozitivan broj.\n");
	}else if(n==1 && x==0){
		printf("Nije unesen ni jedan broj.\n");
	}else if(n!=1){
		printf("Proizvod pozitivnih brojeva iznosi: %d.\n", n);
	}

return 0;
}
