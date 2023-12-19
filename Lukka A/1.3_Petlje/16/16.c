#include <stdio.h>
int main()
{

	float x, x1=0, x2=0, x3=0;

	printf("Unesite brojeve po zelji, kada zelite da prekinete unos unesite 0: ");

	while(x!=0){
		scanf("%f", &x);
		x1+=x;
	if(x!=0)
		x2++;
		}
	
	if(x1!=0){
		printf("Aritemticka sredina iznosi %.2f.\n", x1/x2);
		return 0;
	}else if(x1==0){
		printf("Nisu uneti brojevi.");
		return 1;
	}

return 0;
}
