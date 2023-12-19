#include <stdio.h>

int main()
{

	float x, y, z, w;
	
	printf("Unesite 3 prozivoljne cifre x, y, z:");
		scanf("%f%f%f", &x, &y, &z);

	w=(x+y+z)/3;

	printf("Aritmeticka sredina ova 3 broja iznosi %.2f.\n", w);

return 0;
}
