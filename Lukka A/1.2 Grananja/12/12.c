#include <stdio.h>
#include <math.h>

int main()
{

	int x, c1, c2, c3;
	
	printf("Unesite jedan pozitivan trocifreni broj: ");
		scanf("%d", &x);

	if(x<1000 && x>99){

		c1=x/100;
		c3=x%10;
		c2=(x/10)%10;
	
	if(x==pow(c1, 3) + pow(c2, 3) + pow(c3, 3)){
		printf("Uneti broj jeste Armstrongov.\n");
	}else{
		printf("Uneti broj nije Amstrongov.\n");
	};
		

	}else{
		printf("Uneti broj nije trocifren ili nije pozitivan.\n");
	}

return 0;
}
