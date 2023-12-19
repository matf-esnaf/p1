#include <stdio.h>
int main()
{
	//u ovom programu mozemo racunati vreme dolaska samo u jednom danu i minuti dolaska uvek moraju biti veci od min  odlaska zbog nedostaka apsolutne vrednost tj stdlib.h

	int A, B, C, D, E, F;
	
	printf("Uneti vreme poletanja izrazeno u satima i minutima:\n");
		scanf("%d", &A);
		scanf("%d", &B);

	printf("Uneti vreme sletanja izrazeno u satima i minutima:\n");
		scanf("%d", &C);
		scanf("%d", &D);
	
	E=C-A;
	F=D-B;
	
	printf("Vreme koje cete provesti u letu iznosi: %d sati i %d min\n", E, F);

return 0;
}
