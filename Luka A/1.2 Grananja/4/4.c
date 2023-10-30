#include <stdio.h>
int main()
{

	float x, y, z, zbir;

	printf("Uneti 3 cela broja x, y, z:");
		scanf("%f%f%f", &x, &y, &z);

	if(x>0)
		zbir=zbir+x;

	if(y>0)
		zbir=zbir+y;

	if(z>0)
		zbir=zbir+z;

	printf("Zbir pozitivnih brojeva iznosi: %.1f.\n", zbir);

return 0;
}
