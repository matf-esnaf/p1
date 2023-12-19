#include <stdio.h>

int main()
{

	float a11, a12, a21, a22, x;
	
	printf("Uneti vrednosti matrice dimenzija 2x2 a11, a12, a21, a22:");
		scanf("%f%f%f%f", &a11, &a12, &a21, &a22);

	x=(a11*a22)-(a12*a21);

	printf("Vrednost determinante matrice iznosi:%.4f.\n", x);

return 0;
}
