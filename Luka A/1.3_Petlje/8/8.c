#include <stdio.h>
int main()
{

	int n, m=2, l;

	printf("Uneti ceo broj n: ");
		scanf("%d", &n);

	if(n>0){

	while(m<=n){

		l=n/m;

	if(n%m==0){
		printf("%d ", m);	
	}
		m++;
	}
	}else{
		printf("Neispravan unos broja.\n");
	return 1;
	}	

return 0;
}
