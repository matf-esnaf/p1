#include <stdio.h>

int main()
{

	float x, y;

	printf("Unesite duzinu puta izrazenu u miljama:");
		scanf("%f", &x);

	y=x*1.609344;

	printf("Ista duzina nakon konvertovanja u kilometre iznosi:%.2f.", y);

return 0;
}
