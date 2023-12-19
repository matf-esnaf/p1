#include <stdio.h>
int main()
{

	int x, y, z, pp, np, un;

	printf("Unesite cene tri proizvoda za kupovinu:");
		scanf("%d%d%d", &x, &y, &z);

	pp=x+y+z;

	if(x>0 && y>0 && z>0){
	
		if(x<y && x<z)
			x=1;
		if(y<x && y<z)
			y=1;
		if(z<x && z<y)
			z=1;

		np=x+y+z;
		un=pp-np;

		printf("Ukupna cena iznosi %d.\n", np);
		printf("Ukupna usteda iznosi %d.\n", un);
	
	}else{
		printf("Greska: neispravan unos cene.");
	}	
	
return 0;
}
