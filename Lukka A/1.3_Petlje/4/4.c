#include <stdio.h>
int main()
{

	int m, n;

	printf("Unesite 2 cela broja m i n gde je m<=n: ");
		scanf("%d %d", &m, &n);

	if(m<=n){

	m=m-1;

	while(m<n){	
		m++;
	printf("%d ", m);
	}

	}else{
		printf("Neispravan unos intervala.\n");
	}

return 0;
}
