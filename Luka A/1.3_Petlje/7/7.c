#include <stdio.h>
#include <math.h>
int main()
{

	float x, n;

	printf("Unesite brojeve x i n (x^n): ");
		scanf("%f %f", &x, &n);

	x=pow(x, n);

	printf("Broj x stepenovan brojem n iznosi %f. \n", x);

return 0;
}
