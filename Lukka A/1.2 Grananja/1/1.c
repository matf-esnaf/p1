#include <stdio.h>
int main()
{

	float x, y, z, min;

	printf("Unesite 3 cela broja x, y, z:");
		scanf("%f%f%f", &x, &y, &z);

	min=x;

	if(y<min)
		min=y;

	if(z<min)
		min=z;

	printf("Najmanj: %.1f.\n", min);

return 0;
}
