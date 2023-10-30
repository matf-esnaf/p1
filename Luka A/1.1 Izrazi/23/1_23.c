#include <stdio.h>
#include <math.h>

int main()
{

	float a, O, P;

	printf("Unesite duzinu stranice jednakostranicnog trougla:");
		scanf("%f", &a);

	O=3*a;
	P=(a*a*sqrt(3))/4;

	printf("Obim:%.2f\n", O);
	printf("Povrsina:%.2f\n", P);

return 0;
}
