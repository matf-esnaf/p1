#include <stdio.h>
int main()
{

	int x,y,sabiranje,oduzimanje,mnozenje,deljenje,ostatak;
	
	printf("Unesite ceo broj x:\n");
		scanf("%d", &x);

	printf("Unesite ceo broj y:\n");
		scanf("%d", &y);

	sabiranje= x+y;
	oduzimanje= x-y;
	mnozenje= x*y;
	deljenje= x/y;
	ostatak= x%y;

	printf("Zbir brojeva x i y iznosi: %d\n", sabiranje);
	printf("Razlika brojeva x i y iznosi: %d\n", oduzimanje);
	printf("Proizvod brojeva x i y iznosi: %d\n", mnozenje);
	printf("Kolicnik brojeva x i y iznosi: %d\n", deljenje);
	printf("Ostatak pri deljenju x i y iznosi: %d\n", ostatak);

return 0;
}
