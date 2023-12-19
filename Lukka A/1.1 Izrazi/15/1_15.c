#include <stdio.h>

int main()
{

	int n, m, ls, ds;
	
	printf("Unesite proizvoljan pozitivan broj m i proizvoljan pozitivan broj n:");
		scanf("%d%d", &n, &m);

	ls=n/1000;
	ds=n%1000;

	n=m*1000+ds+ls*100000;

	printf("Nakon umetanja m u n vas broj iznosi: %d\n", n);

return 0;
}
