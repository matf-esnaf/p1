#include <stdio.h>
#include <math.h>

int main(){

	int n;

	printf("Unesite jedan broj: ");
	scanf("%d", &n);

	int n1=n, n2=0, k=0;
	
	for(int i=0; n1!=0; i++){
		int c=n1%10;
		if(c%2!=0){
			n2+=c*pow(10, k);
			k++;
		}
		n1/=10;
	}

	printf("Novi broj: %d", n2);

	return 0;
}		
