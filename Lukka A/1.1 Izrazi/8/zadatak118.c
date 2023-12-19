#include <stdio.h>
int main()
{

	//temp predstavlja privremenu varijablu koja u 99% slucajeva sluzi za zamenu dve vrednosti
	//kada pisemo x=y to znaci da x dobija vrednost od y
	//kada pisemo y=x to znaci da y dobija vrednost od x
	//ukratko varijabla sa desne strane daje vrednost varijabli sa leve strane

	int x, y;
	printf("Unesite proizvoljan broj x i proizvoljan broj y:\n");
		printf("x:");
			scanf("%d", &x);
		printf("y:");
			scanf("%d", &y);

	int temp=x;
	x=y;
	y=temp;
	
	printf("Nakon zamene x iznosi %d, a y iznosi %d.\n", x, y);

return 0;
}
