#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Uneti broj n: ");
		scanf("%d", &n);

	if(n<=0){
		printf("Nekorektan unos.");
		return 1;
	}
	
	int c, brojac=-1, nbr=0;
	while(n!=0){
		c=n%10;
		brojac++;
	if(c%2==0){
		c++;
		nbr+=c*pow(10, brojac);
	}else if(c%2!=0){
		nbr+=c*pow(10, brojac);
	}
		n=n/10;
	}
	printf("Nova vrednost roja n iznosi %d.", nbr);

return 0;
}
