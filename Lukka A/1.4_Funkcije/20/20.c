#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int armstrong (int n);

int main(){

int x;

	printf("Unesite jedan broj: ");
		scanf("%d", &x);
	
	if(x < 1){
		printf("Greska pri unosu.\n");
		return -1;
	}

	if (armstrong (x) == 1){
		printf("Broj je Armstrongov.\n");
		return 0;
	} else if (armstrong (x) == 0){
		printf("Broj nije Armstrongov.\n");
		return -1;
	}
}

int armstrong (int n){

int i=0, z=0;

	for(int n1=n; n1!=0; n1=n1/10){
		i++;
	}

int c1;

	for(int n2=n; n2!=0; n2=n2/10){
		c1=n2%10;
		z+=pow(c1, i);
	}
	
	if(z == n){
		return 1;
	} else if(z != n){
		return 0;
	}
}
