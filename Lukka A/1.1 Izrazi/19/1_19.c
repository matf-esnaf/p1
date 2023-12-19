#include <stdio.h>

int main()
{

	float x, y;

	printf("Unesite temperaturu izrazenu u F sistemu:");
		scanf("%f", &x);

	y=(x-32)*5/9;

	printf("%.2f F = %.2f C.\n", x, y);

return 0;
}
