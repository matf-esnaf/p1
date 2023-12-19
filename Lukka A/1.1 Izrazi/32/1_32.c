#include <stdio.h>
#include <math.h>

int main()
{

	float x, y, rez;

	printf("Unesite 2 realna broja x i y:");
		scanf("%f%f", &x, &y);

	if(x>y){
		rez=(y+0.5)/(1+pow(x, 2));
	}else{
		rez=(x+0.5)/(1+pow(y, 2));
	}

	printf("Rezultat iznosi %.2f.\n", rez);

return 0;
}
