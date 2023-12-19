#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Unesite vrednost n: ");
		scanf("%d", &n);
	
	int c1, eks=-1, br=0, nbr=0;
	while(n!=0){
	c1=n%10;
	br++;
	if(br%2!=0){
	eks++;
	nbr+=c1*pow(10, eks);
	}
	n=n/10;
	}

	printf("Novi broj iznos %d.", nbr);
return 0;
}
