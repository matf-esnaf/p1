#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n;

	printf("Ulaz:\n");
	scanf("%d", &n);

	int n1=0;

	for(int i=0; n!=0; n/=10, i++){
		int c=n%10;
		if(c%2==0){
			c/=2;
			n1+=(c*pow(10, i));
		}else{
			n1+=(c*pow(10, i));
		}
	}

	printf("\n%d\n", n1);

	exit(EXIT_SUCCESS);
}
