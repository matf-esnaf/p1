#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rotacija (int n);

int main(){

int x;

	printf("Unesite jedan broj: ");
	
	while(x!=0){
		scanf("%d", &x);
		printf("Novi broj je %d.\n", rotacija(x));
	}

	if(x==0){
		return 0;
	}
}

int rotacija (int n){

int n1=n, c1=0, c2=0, i=1;

	while(n1/100!=0){
		n1=n1/10;
		i++;	
	}

	c1=n1/10;
	c2=n1%10;

	n=n-c1*pow(10, i)-c2*pow(10, i-1);	
	n=n+c1*pow(10, i-1)+c2*pow(10, i);

	return n;
}
