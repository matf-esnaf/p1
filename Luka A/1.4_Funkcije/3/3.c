#include <stdio.h>
int zbir_delilaca(int n);
int main()
{
	int k, k1=1;
	printf("Unesite broj k: ");
		scanf("%d", &k);
	if(k<1){
		return 1;
	}
	
	while(k1<=k){
	
	printf("%d ", zbir_delilaca(k1));
		k1++;
	}	


return 0;
}

int zbir_delilaca(int n){

	int n1=1, l=0;
	
	while(n1<=n){
		int s=1;
		int z=0;
	while(s<=n1){
		if(n1%s==0){
		z=z+s;
		}
	s++;
		}
	n1++;
	l=z;
		}
	return l;
}
