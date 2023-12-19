#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zapis (int x, int y);

int main(){

int a, b;

	printf("Unesite 2 broja: ");
		scanf("%d %d", &a, &b);

int rezultat = zapis (a, b);

	if (rezultat == 1){
		printf("Uslov za ova dva broja je ispunjen.\n");
		return 0;
	}else if (rezultat == 0){
		printf("Uslov za ova dva broja nije ispunjen.\n");
		return -1;
	}
}

int zapis (int x, int y){

	while(x!=0){

int y1=y, i=0, cx=0, cy=0;

		cx=x%10;

		while(y1!=0){
			cy=y1%10;
			if(cy==cx){
				break;
			}
			i++;
			y1=y1/10;
		}

		if(cx!=cy){
			return 0;
		}
	
		y=y-cy*pow(10, i);
		x=x/10;
	}
	
	return 1;
}
