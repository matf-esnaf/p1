#include <stdio.h>
#include <stdlib.h>

int funkcija (int m);

int main(){

	int n, m, max=0, m1;

	printf("Ulaz:\n");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &m);
		if(funkcija(m)>max){
			max=m;
			m1=m;
		}
	}

	printf("\n%d\n", m1);

	exit(EXIT_SUCCESS);
}

int funkcija (int m){

	int even=0, odd=0;

	for(; m!=0; m/=10){
		int d=m%10;
		if(d%2==0){
			even+=d;
		}else{
			odd+=d;
		}
	}

	return even-odd;
}
