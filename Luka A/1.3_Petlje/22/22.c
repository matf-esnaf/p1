#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Unesite brojeve: ");
	int n, n2=0, n3=0, n1=0,  maxbr, minbr, ubr=0;		
	while(n!=0){
		scanf("%d", &n);
	n1=n;
	if(n1==0){
		break;
	}
	if(n1>n2 || n2==0){
		n2=n1;
		maxbr=n1;
	}else if(n3>n1 || n3==0){
		n3=n1;
		minbr=n3;
	}
	ubr++;
	}
	
	if(ubr==0){
		printf("Nisu unete nadmorske visine.");
		return 1;
	}else if(ubr<2){
		printf("Uneta je samo jedna visina.");
		return 1;
	}
	printf("Razlika najamnje i najvece visine je %d.", abs(maxbr-minbr));

return 0;
}
