#include <stdio.h>
int main()
{

	int x, x1, y, z=0;

	printf("Uneti proizvoljan broj x: ");
		scanf("%d", &x);

	if(x>0){
		x1=x;
	while(x%10!=0){
		y=x%10;
		z=z+y;
		x=x/10;
	}if(x1%z==0){
		printf("Broj x je deljiv sa zbirom svojih cifara koji iznosi %d.\n", z);
	}else{
		printf("Broj x nije deljiv sa zbirom svojih cifara koji iznosi %d.\n", z);
	}

	}else{
		printf("Neispravan unos broja x.");
	}
	
	if(x==0)

return 0;
}
