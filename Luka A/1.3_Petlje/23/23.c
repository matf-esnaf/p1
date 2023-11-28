#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, d;

	printf("Unesite brojeve n i d: ");
		scanf("%d %d", &n, &d);

	if(n<=1 || d<0){
		printf("Nekorektan unos broja.");
		return 1;
	}
	int brojparova=0;
	printf("Unesite n brojeva: ");
	int x, y;
		scanf("%d", &x);
	for(int n1=1; n1<n; n1++){
		scanf("%d", &y);
	if(d==abs(x-y)){
		brojparova++;
	}
	x=y;
	}

	printf("Broj parova iznosi %d.", brojparova);

return 0;
}
