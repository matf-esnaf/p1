#include <stdio.h>
int main()
{

	int x, x1;

	printf("Unesite broj: ");
		scanf("%d", &x);

	while(x/10!=0){
		x1=x%10;

	if(x1==5 || x1==-5){
		printf("Uneti broj sadrzi cifru 5.\n");
	return 0;
	}
	x=x/10;
	}
	
	if(x1!=5){
		printf("Uneti broj ne sadrzi cifru 5.\n");
	return 1;
	}

return 0;
}
