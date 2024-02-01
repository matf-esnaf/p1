#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;

	printf("Ulaz:\n");
	scanf("%d", &n);

	int max=0, min=0, poz1=0, poz2=0;
	
	for(int i=0; n!=0; i++){
		int c=n%10;
		if(c>max){
			max=c;
			poz1=i;
		}
		if(c<min || min==0){
			min=c;
			poz2=i;
		}
		n/=10;
	}

	printf("\n max %d min %d\n", poz1, poz2);

	exit(EXIT_SUCCESS);
}
