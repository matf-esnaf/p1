#include <stdio.h>
#include <math.h>
int main()
{

	//kod int komande koristimo %d ili %i i sluzi za izarazavanje celih brojeva
	//kod float koristimo %f i float sluzi za izravanje brojeva sa decimalnim zapisom

	float r, P, O;
	printf("Uneti poluprecnik kruga r:\n");
		scanf("%f", &r);

	O=2*r*M_PI;
	P=r*r*M_PI;

	printf("Obim ovog kruga iznosi %f, a povrsina ovog kruga iznosi %f.\n", O, P);

return 0;
}
