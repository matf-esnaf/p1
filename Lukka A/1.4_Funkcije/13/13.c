#include <stdio.h>
#include <stdlib.h>

int sve_parne_cifre (int x);
int sve_cifre_jednake (int x);

int main(){

int a;

	printf("Unesite jedan broj: ");
		scanf("%d", &a);

	if(sve_parne_cifre(a)==1){
		printf("Sve cifre broja su parne.\n");
	}else{
		printf("Broj sadrzi barem jednu neparnu cifru.\n");
	}

	if(sve_cifre_jednake(a)==1){
		printf("Sve cifre ovog broja su iste.\n");
	}else{
		printf("Cifre broja nisu jednake.\n");
	}
}

int sve_parne_cifre (int x){

int y=0, p=0, n=0;

	while(x!=0){
		y=x%10;
		n++;
	if(y%2==0){
		p++;	
	}
	x=x/10;
	}

	if(p==n){
		return 1;
	}
	
	return 0;
}

int sve_cifre_jednake (int x){

int y=0, p=0, z=0, n=-1;

	while(x!=0){
		y=x%10;
		n++;
	if(z!=0){
		if(z==y){
			p++;
		}
	}
	z=y;
	x=x/10;
	}

	if(p==n){
		return 1;
	}

	return 0;
}
