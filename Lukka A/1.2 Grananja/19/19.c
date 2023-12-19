#include <stdio.h>
#include <math.h>
int main()
{

	float x1, x2, a, b, c, D;

	printf("Uneti vrednosti a, b, c za ax^2±bx±c=0: ");
		scanf("%f %f %f", &a, &b, &c);

	if(a!=0){
	
		D=pow(b,2)-4*a*c;

	if(D>=0){

		x1=(-b+sqrt(D))/2*a;
		x2=(-b-sqrt(D))/2*a;

		printf("Resenja kvadratne jednacine iznose %.2f i %.2f.", x1, x2);

	}else if(D<0){
		printf("Kvadratna jednacina nema resenja (D<0).");
	}

	}else{
		printf("Kvadratna jednacina nema resenja (a=0).");
	}	

	
return 0;
}
