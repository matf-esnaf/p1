#include <stdio.h>

int main()
{

	float a, b, c, x, P, G, U;

	printf("Uneti dimenzije prostorije x, y, z i uneti cenu farbe po m^2:");
		scanf("%f%f%f", &a, &b, &c);

	printf("Unesite cenu po m^2 za farmu:");
		scanf("%f", &x);

	P=2*(a*b+a*c+b*c);
	G=P-((P/100)*20);
	U=G*x;

	printf("Povrsina za krecenje iznosi %.2f.\n", G);
	printf("Cena krecenja iznosi %.2f.\n", U);

return 0;
}
