#include <stdio.h>

int main()
{

	int x, ls, ds;

	printf("Unesite broj x:");
		scanf("%d", &x);
	
	ls=x/100;
	ds=x%10;
	x=ls*10+ds;
	
	printf("Nova vrednost broja x nakon uklanjanja desetica iznosi:%d\n", x);

return 0;
}
