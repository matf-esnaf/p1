#include <stdio.h>
#include <math.h>

int main(){

	int n;

	printf("Ulaz:\n");
	scanf("%d", &n);

	int sum=0;

	for(; n!=0; n/=10){
		int c=n%10;
		if(c%2!=0){
			sum+=fabs(pow(c, 3));
		}
	}

	printf("\n%d\n", sum);
	
	return 0;
}
