#include <stdio.h>

int main()
{

	float a, b, O, P;

	printf("Uneti duzine stranica pravougaonika a i b.");
		scanf("%f%f", &a, &b);

	O=a+b;
	P=a*b;

	printf("Obim iznosi %.2f, a povrsina iznosi %.2f.\n", O, P);

return 0;
}
