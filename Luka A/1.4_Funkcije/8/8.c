#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prost (int x);
void prvih_n_prostih (int n);
void prosti_brojevi_manji_od_n (int n);

int main(){
	int a, a1=0, a2=0;

	printf("Unesite prost broj: ");
		scanf("%d", &a);

	if(prost(a)!=2){
		printf("Greska u unosu broja. Broj nije prost.\n");
			return -1;
	}else{
		printf("\n Prvih %d prostih brojeva: ", a);
			prvih_n_prostih(a);
		printf("\n Prosti brojevi manji od %d: ", a);
			prosti_brojevi_manji_od_n(a);
			return 0;
	}
}

int prost (int x){
	int y=1, z=0;

	while(y<=x){
		if(x%y==0){
		z++;
	}
		y++;
	}	

	return z;
}

void prosti_brojevi_manji_od_n  (int n){

	while(n>1){
		int l=1;
		int k=0;
	while(n>=l){
		if(n%l==0){
			k++;
		}
			l++;
		}if(k==2){
			printf("%d ", n);
		}
		n--;
}
}

void prvih_n_prostih (int n){

int p=0, m=1;

	while(n>p){
		int l=1;
		int k=0;
	while(m>=l){
		if(m%l==0){
			k++;
		}
			l++;
		}if(k==2){
			printf("%d ", m);
			p++;
		}
		m++;
}
}
