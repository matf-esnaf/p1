#include <stdio.h>
int main()
{

	float x, x1=0, x2=0;

	printf("Unesite cene artikala, a da zavrsite unos napisite 0: ");

	while(x!=0){
		scanf("%f", &x);
	
	if(x==0){
		break;
	}

	if(x<0){
		printf("Neispravan unos cene.\n");
		return 1;
	}
		x1+=x;
		x2++;
	}

	if(x2!=0){
		printf("Prosecna cena aritkla iznosi %.2f.\n", x1/x2);
		return 0;
	}else{
		printf("Nisu uneti brojevi.\n");
		return 1;
	}

return 0;
}
