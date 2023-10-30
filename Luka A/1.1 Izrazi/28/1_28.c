#include <stdio.h>
#include <math.h>

int main()
{

	int x, p, c, x1, ls, ds;

	printf("Uneti tri cela pozitivna cela broja x, p i c:");
		scanf("%d%d%d", &x, &p, &c);

				
	//140 1 2
	//1420
	//140/10^1=14
	//140%10^1=0
	//1420=2*(10^1)+ds+ds*pow(10^1+1)


	ls=x/pow(10,p);
	ds=x%(int)pow(10, p);
	x1=ds+ls*pow(10, p+1)+c*pow(10, p);

	printf("Nakon umetanja broja c u x na mesto p dobijeni broj je %d.\n", x1);
	
return 0;
}
